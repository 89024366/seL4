/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */

#ifndef __ARCH_OBJECT_TYPE_H
#define __ARCH_OBJECT_TYPE_H

#ifdef HAVE_AUTOCONF
#include <autoconf.h>
#endif /* HAVE_AUTOCONF */

typedef enum _object {
    seL4_X86_4K = seL4_NonArchObjectTypeCount,
    seL4_X86_LargePageObject,
    seL4_X86_PageTableObject,
    seL4_X86_PageDirectoryObject,
    seL4_X86_PDPTObject,
    seL4_X86_IOPageTableObject,
#ifdef CONFIG_VTX
    seL4_X86_VCPUObject,
    seL4_X86_EPTPageDirectoryPointerTableObject,
    seL4_X86_EPTPageDirectoryObject,
    seL4_X86_EPTPageTableObject,
#endif
    seL4_IA32_PDPTObject,
    seL4_ObjectTypeCount
} seL4_ArchObjectType;
typedef seL4_Word object_t;

/* Previously frame types were explcitly 4K and 4M. If not PAE
 * we assume legacy environment and emulate old definitions */
#ifndef CONFIG_PAE_PAGING
#define seL4_IA32_4M seL4_X86_LargePageObject
#endif

#endif
