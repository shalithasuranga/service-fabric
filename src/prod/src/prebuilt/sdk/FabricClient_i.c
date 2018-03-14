// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------



/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0613 */
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_FabricClientLib,0x31e3a54f,0x57f2,0x4453,0xb3,0x8e,0xbf,0xa9,0x0b,0x50,0x52,0x31);


MIDL_DEFINE_GUID(IID, IID_IFabricServicePartitionResolutionChangeHandler,0xf495715d,0x8e03,0x4232,0xb8,0xd6,0x12,0x27,0xb3,0x99,0x84,0xfc);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceNotificationEventHandler,0xa04b7e9a,0xdaab,0x45d4,0x8d,0xa3,0x95,0xef,0x3a,0xb5,0xdb,0xac);


MIDL_DEFINE_GUID(IID, IID_IFabricClientConnectionEventHandler,0x2bd21f94,0xd962,0x4bb4,0x84,0xb8,0x5a,0x4b,0x3e,0x9d,0x4d,0x4d);


MIDL_DEFINE_GUID(IID, IID_IFabricClientConnectionEventHandler2,0x6b5dbd26,0x7d7a,0x4a3f,0xb8,0xea,0x1f,0x04,0x91,0x05,0xe8,0x97);


MIDL_DEFINE_GUID(IID, IID_IFabricClientSettings,0xb0e7dee0,0xcf64,0x11e0,0x95,0x72,0x08,0x00,0x20,0x0c,0x9a,0x66);


MIDL_DEFINE_GUID(IID, IID_IFabricClientSettings2,0xc6fb97f7,0x82f3,0x4e6c,0xa8,0x0a,0x02,0x1e,0x8f,0xfc,0xa4,0x25);


MIDL_DEFINE_GUID(IID, IID_IFabricPropertyManagementClient,0x26e58816,0xb5d5,0x4f08,0x97,0x70,0xdb,0xf0,0x41,0x0c,0x99,0xd6);


MIDL_DEFINE_GUID(IID, IID_IFabricPropertyManagementClient2,0x04991c28,0x3f9d,0x4a49,0x93,0x22,0xa5,0x6d,0x30,0x89,0x65,0xfd);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceManagementClient,0xf7368189,0xfd1f,0x437c,0x88,0x8d,0x8c,0x89,0xce,0xcc,0x57,0xa0);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceManagementClient2,0x9933ed08,0x5d0c,0x4aed,0xba,0xb6,0xf6,0x76,0xbf,0x5b,0xe8,0xaa);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceManagementClient3,0x98EC1156,0xC249,0x4F66,0x8D,0x7C,0x9A,0x5F,0xA8,0x8E,0x8E,0x6D);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceManagementClient4,0x8180db27,0x7d0b,0x43b0,0x82,0xe0,0x4a,0x8e,0x02,0x2f,0xc2,0x38);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceManagementClient5,0xF9A70679,0x8CA3,0x4E27,0x94,0x11,0x48,0x3E,0x0C,0x89,0xB1,0xFA);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceManagementClient6,0x23E4EE1B,0x049A,0x48F5,0x8D,0xD7,0xB6,0x01,0xEA,0xCE,0x47,0xDE);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceGroupManagementClient,0x2061227e,0x0281,0x4baf,0x9b,0x19,0xb2,0xdf,0xb2,0xe6,0x3b,0xbe);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceGroupManagementClient2,0x4f0dc42d,0x8fec,0x4ea9,0xa9,0x6b,0x5b,0xe1,0xfa,0x1e,0x1d,0x64);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceGroupManagementClient3,0xcbee0e12,0xb5a0,0x44dc,0x8c,0x3c,0xc0,0x67,0x95,0x8f,0x82,0xf6);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceGroupManagementClient4,0x3C73B32E,0x9A08,0x48CA,0xB3,0xA3,0x99,0x3A,0x20,0x29,0xE3,0x7A);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationManagementClient,0x7c219ae9,0xe58d,0x431f,0x8b,0x30,0x92,0xa4,0x02,0x81,0xfa,0xac);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationManagementClient2,0xf873516f,0x9bfe,0x47e5,0x93,0xb9,0x36,0x67,0xaa,0xf1,0x93,0x24);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationManagementClient3,0x108c7735,0x97e1,0x4af8,0x8c,0x2d,0x90,0x80,0xb1,0xb2,0x9d,0x33);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationManagementClient4,0x82c41b22,0xdbcb,0x4f7a,0x8d,0x2f,0xf9,0xbb,0x94,0xad,0xd4,0x46);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationManagementClient5,0xd7490e43,0x2217,0x4158,0x93,0xe1,0x9c,0xe4,0xdd,0x6f,0x72,0x4a);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationManagementClient6,0xb01e63ee,0x1ea4,0x4181,0x95,0xc7,0x98,0x3b,0x32,0xe1,0x68,0x48);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationManagementClient7,0x26844276,0x25B1,0x4F8C,0xAD,0xBE,0xB1,0xB3,0xA3,0x08,0x3C,0x17);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationManagementClient8,0x97b38e85,0x7329,0x47ff,0xa8,0xd2,0xb7,0xcb,0xf1,0x60,0x36,0x89);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationManagementClient9,0x26617b63,0x1350,0x4d7f,0x83,0x0c,0x22,0x00,0x97,0x8d,0x31,0xbb);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationManagementClient10,0x67001225,0xd106,0x41ae,0x8b,0xd4,0x5a,0x0a,0x11,0x9c,0x5c,0x01);


MIDL_DEFINE_GUID(IID, IID_IFabricClusterManagementClient,0xa3cf17e0,0xcf84,0x4ae0,0xb7,0x20,0x17,0x85,0xc0,0xfb,0x4a,0xce);


MIDL_DEFINE_GUID(IID, IID_IFabricClusterManagementClient2,0xf9493e16,0x6a49,0x4d79,0x86,0x95,0x5a,0x68,0x26,0xb5,0x04,0xc5);


MIDL_DEFINE_GUID(IID, IID_IFabricClusterManagementClient3,0xc3001d74,0x92b6,0x44cb,0xac,0x2f,0x2f,0xfc,0x4a,0x56,0x28,0x7c);


MIDL_DEFINE_GUID(IID, IID_IFabricClusterManagementClient4,0xb6b12671,0xf283,0x4d71,0xa8,0x18,0x02,0x60,0x54,0x9b,0xc8,0x3e);


MIDL_DEFINE_GUID(IID, IID_IFabricClusterManagementClient5,0xa6ddd816,0xa100,0x11e4,0x89,0xd3,0x12,0x3b,0x93,0xf7,0x5c,0xba);


MIDL_DEFINE_GUID(IID, IID_IFabricClusterManagementClient6,0x9e454ae8,0x4b8c,0x4136,0x88,0x4a,0x37,0xb0,0xb9,0x2c,0xc8,0x55);


MIDL_DEFINE_GUID(IID, IID_IFabricClusterManagementClient7,0x9B9105AC,0xD595,0x4F59,0x9C,0x94,0x1F,0xFD,0xBF,0x92,0xA8,0x76);


MIDL_DEFINE_GUID(IID, IID_IFabricHealthClient,0x3d00d0be,0x7014,0x41da,0x9c,0x5b,0x0a,0x9e,0xf4,0x6e,0x2a,0x43);


MIDL_DEFINE_GUID(IID, IID_IFabricHealthClient2,0x66cbc014,0xd7b3,0x4f81,0xa4,0x98,0xe5,0x80,0xfe,0xb9,0xa1,0xf5);


MIDL_DEFINE_GUID(IID, IID_IFabricHealthClient3,0xdd3e4497,0x3373,0x458d,0xad,0x22,0xc8,0x8e,0xbd,0x27,0x49,0x3e);


MIDL_DEFINE_GUID(IID, IID_IFabricHealthClient4,0x9f0401af,0x4909,0x404f,0x86,0x96,0x0a,0x71,0xbd,0x75,0x3e,0x98);


MIDL_DEFINE_GUID(IID, IID_IFabricQueryClient,0xc629e422,0x90ba,0x4efd,0x8f,0x64,0xce,0xcf,0x51,0xbc,0x3d,0xf0);


MIDL_DEFINE_GUID(IID, IID_IFabricQueryClient2,0x4E6D5D61,0x24C8,0x4240,0xA2,0xE8,0xBC,0xB1,0xFC,0x15,0xD9,0xAF);


MIDL_DEFINE_GUID(IID, IID_IFabricQueryClient3,0x16F563F3,0x4017,0x496E,0xB0,0xE7,0x26,0x50,0xDE,0x57,0x74,0xB3);


MIDL_DEFINE_GUID(IID, IID_IFabricQueryClient4,0xAB92081D,0x0D78,0x410B,0x97,0x77,0x08,0x46,0xDB,0xA2,0x4C,0x10);


MIDL_DEFINE_GUID(IID, IID_IFabricQueryClient5,0x75C35E8C,0x87A2,0x4810,0xA4,0x01,0xB5,0x0D,0xA8,0x58,0xFE,0x34);


MIDL_DEFINE_GUID(IID, IID_IFabricQueryClient6,0x173b2bb4,0x09c6,0x42fb,0x87,0x54,0xca,0xa8,0xd4,0x3c,0xf1,0xb2);


MIDL_DEFINE_GUID(IID, IID_IFabricQueryClient7,0x538baa81,0xba97,0x46da,0x95,0xac,0xe1,0xcd,0xd1,0x84,0xcc,0x74);


MIDL_DEFINE_GUID(IID, IID_IFabricQueryClient8,0x2c850629,0x6a83,0x4fc3,0x84,0x68,0xc8,0x68,0xb8,0x7e,0x9a,0x17);


MIDL_DEFINE_GUID(IID, IID_IFabricQueryClient9,0x76f0b4a5,0x4941,0x49d7,0x99,0x3c,0xad,0x7a,0xfc,0x37,0xc6,0xaf);


MIDL_DEFINE_GUID(IID, IID_IFabricQueryClient10,0x02139da8,0x7140,0x42ae,0x84,0x03,0x79,0xa5,0x51,0x60,0x0e,0x63);


MIDL_DEFINE_GUID(IID, IID_IFabricInfrastructureServiceClient,0xa0cfbc71,0x184b,0x443b,0xb1,0x02,0x4b,0x6d,0x0a,0x7c,0xbc,0x49);


MIDL_DEFINE_GUID(IID, IID_IFabricRepairManagementClient,0xee483ba5,0x9018,0x4c99,0x98,0x04,0xbe,0x61,0x85,0xdb,0x88,0xe6);


MIDL_DEFINE_GUID(IID, IID_IFabricRepairManagementClient2,0x5067d775,0x3baa,0x48e4,0x8c,0x72,0xbb,0x55,0x73,0xcc,0x3f,0xb8);


MIDL_DEFINE_GUID(IID, IID_IFabricTestManagementClient,0x0df0f63a,0x4da0,0x44fe,0x81,0xe8,0xf8,0x0c,0xd2,0x8e,0x9b,0x28);


MIDL_DEFINE_GUID(IID, IID_IFabricTestManagementClient2,0x1222b1ff,0xae51,0x43b3,0xbb,0xdf,0x43,0x9e,0x7f,0x61,0xca,0x1a);


MIDL_DEFINE_GUID(IID, IID_IFabricTestManagementClient3,0xa4b94afd,0x0cb5,0x4010,0x89,0x95,0xe5,0x8e,0x9b,0x6c,0xa3,0x73);


MIDL_DEFINE_GUID(IID, IID_IFabricFaultManagementClient,0x769e1838,0x8726,0x4dcd,0xa3,0xc0,0x21,0x16,0x73,0xa6,0x96,0x7a);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceDescriptionResult,0x86b4f744,0x38c7,0x4dab,0xb6,0xb4,0x11,0xc2,0x37,0x34,0xc2,0x69);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceGroupDescriptionResult,0x3ca814d4,0xe067,0x48b7,0x9b,0xdc,0x9b,0xe3,0x38,0x10,0x41,0x6d);


MIDL_DEFINE_GUID(IID, IID_IFabricResolvedServicePartitionResult,0xfd0fe113,0xcdf8,0x4803,0xb4,0xa0,0x32,0xb1,0xb3,0xef,0x37,0x16);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceNotification,0x8222c825,0x08ad,0x4639,0xaf,0xce,0xa8,0x98,0x8c,0xbd,0x6d,0xb3);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceEndpointsVersion,0x0a673dc5,0x2297,0x4fc5,0xa3,0x8f,0x48,0x2d,0x29,0x14,0x4f,0xa5);


MIDL_DEFINE_GUID(IID, IID_IFabricNameEnumerationResult,0x557e8105,0xf4f4,0x4fd3,0x9d,0x21,0x07,0x5f,0x34,0xe2,0xf9,0x8c);


MIDL_DEFINE_GUID(IID, IID_IFabricPropertyMetadataResult,0x33302306,0xfb8d,0x4831,0xb4,0x93,0x57,0xef,0xcc,0x77,0x24,0x62);


MIDL_DEFINE_GUID(IID, IID_IFabricPropertyValueResult,0x9a518b49,0x9903,0x4b8f,0x83,0x4e,0x19,0x79,0xe9,0xc6,0x74,0x5e);


MIDL_DEFINE_GUID(IID, IID_IFabricPropertyBatchResult,0xee747ff5,0x3fbb,0x46a8,0xad,0xbc,0x47,0xce,0x09,0xc4,0x8b,0xbe);


MIDL_DEFINE_GUID(IID, IID_IFabricPropertyEnumerationResult,0xa42da40d,0xa637,0x478d,0x83,0xf3,0x28,0x13,0x87,0x12,0x34,0xcf);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationUpgradeProgressResult,0x1e4670f8,0xede5,0x48ab,0x88,0x1f,0xc4,0x5a,0x0f,0x38,0x41,0x3a);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationUpgradeProgressResult2,0x62707ee5,0xb625,0x4489,0xaa,0x4d,0x2e,0x54,0xb0,0x6e,0xa2,0x48);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationUpgradeProgressResult3,0x1bc1d9c3,0xeef5,0x41fe,0xb8,0xa2,0xab,0xb9,0x7a,0x8b,0xa8,0xe2);


MIDL_DEFINE_GUID(IID, IID_IFabricUpgradeProgressResult,0x2adb07db,0xf7db,0x4621,0x9a,0xfc,0xda,0xab,0xe1,0xe5,0x3b,0xf8);


MIDL_DEFINE_GUID(IID, IID_IFabricUpgradeProgressResult2,0x9cc0aaf3,0x0f6c,0x40a3,0x85,0xac,0x38,0x33,0x8d,0xd3,0x6d,0x75);


MIDL_DEFINE_GUID(IID, IID_IFabricUpgradeProgressResult3,0xdc3346ef,0xd2ef,0x40c1,0x80,0x7b,0x1c,0xa8,0xd2,0x38,0x8b,0x47);


MIDL_DEFINE_GUID(IID, IID_IFabricClientSettingsResult,0x3b825afd,0xcb31,0x4589,0x96,0x1e,0xe3,0x77,0x8a,0xa2,0x3a,0x60);


MIDL_DEFINE_GUID(IID, IID_IFabricNodeHealthResult,0xe461f70b,0x51b8,0x4b73,0x9f,0x35,0xe3,0x8e,0x5a,0xc6,0x87,0x19);


MIDL_DEFINE_GUID(IID, IID_IFabricClusterHealthResult,0x6b9b0f2c,0x6782,0x4a31,0xa2,0x56,0x57,0x0f,0xa8,0xba,0x32,0xd3);


MIDL_DEFINE_GUID(IID, IID_IFabricApplicationHealthResult,0x41612fab,0xe615,0x4a48,0x98,0xe7,0x4a,0xbc,0xc9,0x3b,0x60,0x49);


MIDL_DEFINE_GUID(IID, IID_IFabricServiceHealthResult,0x52040bd9,0xa78e,0x4308,0xa3,0x0e,0x71,0x14,0xe3,0x68,0x4e,0x76);


MIDL_DEFINE_GUID(IID, IID_IFabricPartitionHealthResult,0x10c9e99d,0xbb3f,0x4263,0xa7,0xf7,0xab,0xba,0xf3,0xc0,0x35,0x76);


MIDL_DEFINE_GUID(IID, IID_IFabricReplicaHealthResult,0xb4d5f2d9,0xe5cc,0x49ae,0xa6,0xc8,0x89,0xe8,0xdf,0x7b,0x6c,0x15);


MIDL_DEFINE_GUID(IID, IID_IFabricDeployedApplicationHealthResult,0x4df50bf4,0x7c28,0x4210,0x94,0xf7,0x50,0x62,0x5d,0xf6,0xc9,0x42);


MIDL_DEFINE_GUID(IID, IID_IFabricDeployedServicePackageHealthResult,0x40991ce0,0xcdbb,0x44e9,0x9c,0xdc,0xb1,0x4a,0x5d,0x5e,0xa4,0xc1);


MIDL_DEFINE_GUID(IID, IID_IFabricGetNodeListResult,0x7cc3eb08,0x0e69,0x4e52,0x81,0xfc,0x01,0x90,0xab,0x99,0x7d,0xbe);


MIDL_DEFINE_GUID(IID, IID_IFabricGetApplicationListResult,0xf038c61e,0x7059,0x41b6,0x8d,0xea,0xd3,0x04,0xa2,0x08,0x0f,0x46);


MIDL_DEFINE_GUID(IID, IID_IFabricGetApplicationTypeListResult,0x944f7a70,0x224e,0x4191,0x8d,0xd1,0xbb,0xa4,0x6d,0xc8,0x8d,0xd2);


MIDL_DEFINE_GUID(IID, IID_IFabricGetApplicationTypePagedListResult,0x5d8dde9c,0x05e8,0x428d,0xb4,0x94,0x43,0x87,0x3d,0x7c,0x2d,0xb8);


MIDL_DEFINE_GUID(IID, IID_IFabricGetServiceTypeListResult,0x886e4ad2,0xedb8,0x4734,0x9d,0xd4,0x0e,0x9a,0x2b,0xe5,0x23,0x8b);


MIDL_DEFINE_GUID(IID, IID_IFabricGetServiceGroupMemberTypeListResult,0x5e572763,0x29a9,0x463a,0xb6,0x02,0x13,0x32,0xc0,0xf6,0x0e,0x6b);


MIDL_DEFINE_GUID(IID, IID_IFabricGetServiceListResult,0x9953e19a,0xea1e,0x4a1f,0xbd,0xa4,0xab,0x42,0xfd,0xb7,0x71,0x85);


MIDL_DEFINE_GUID(IID, IID_IFabricGetServiceGroupMemberListResult,0xe9f7f574,0xfd07,0x4a71,0x9f,0x22,0x9c,0xf9,0xcc,0xf3,0xc1,0x66);


MIDL_DEFINE_GUID(IID, IID_IFabricGetPartitionListResult,0xafc1266c,0x967b,0x4769,0x9f,0x8a,0xb2,0x49,0xc5,0x88,0x7e,0xe6);


MIDL_DEFINE_GUID(IID, IID_IFabricGetReplicaListResult,0xe00d3761,0x3ac5,0x407d,0xa0,0x4f,0x1b,0x59,0x48,0x62,0x17,0xcf);


MIDL_DEFINE_GUID(IID, IID_IFabricGetDeployedApplicationListResult,0x5722b789,0x3936,0x4c33,0x9f,0x7a,0x34,0x29,0x67,0x45,0x76,0x12);


MIDL_DEFINE_GUID(IID, IID_IFabricGetDeployedApplicationPagedListResult,0xebd76f6f,0x508e,0x43ea,0x9c,0xa2,0xa9,0x8e,0xa2,0xc0,0xe8,0x46);


MIDL_DEFINE_GUID(IID, IID_IFabricGetDeployedServicePackageListResult,0x65851388,0x0421,0x4107,0x97,0x7b,0x39,0xf4,0xe1,0x54,0x40,0xd4);


MIDL_DEFINE_GUID(IID, IID_IFabricGetDeployedServiceTypeListResult,0xdba68c7a,0x3f77,0x49bb,0xb6,0x11,0xff,0x94,0xdf,0x06,0x2b,0x8d);


MIDL_DEFINE_GUID(IID, IID_IFabricGetDeployedCodePackageListResult,0x3f390652,0xc0dc,0x4919,0x8a,0x7f,0x8a,0xe1,0xe8,0x27,0xde,0x0c);


MIDL_DEFINE_GUID(IID, IID_IFabricGetDeployedReplicaListResult,0x29e064bf,0x5d78,0x49e5,0xba,0xa6,0xac,0xfc,0x24,0xa4,0xa8,0xb5);


MIDL_DEFINE_GUID(IID, IID_IFabricGetDeployedServiceReplicaDetailResult,0x6D9D355E,0x89CF,0x4928,0xB7,0x58,0xB1,0x1C,0xA4,0x66,0x4F,0xBE);


MIDL_DEFINE_GUID(IID, IID_IFabricGetProvisionedCodeVersionListResult,0xd042bdb6,0x4364,0x4818,0xb3,0x95,0x0e,0x6b,0x1a,0x22,0xcb,0x11);


MIDL_DEFINE_GUID(IID, IID_IFabricGetProvisionedConfigVersionListResult,0x1bbb9f78,0xe883,0x49d1,0xa9,0x98,0x7e,0xb8,0x64,0xfd,0x4a,0x0e);


MIDL_DEFINE_GUID(IID, IID_IFabricGetNodeLoadInformationResult,0x4332eb3a,0xaed6,0x86fe,0xc2,0xfa,0x65,0x31,0x23,0xde,0xa0,0x9b);


MIDL_DEFINE_GUID(IID, IID_IFabricGetApplicationLoadInformationResult,0x38fd0512,0x7586,0x4bd5,0x96,0x16,0xb7,0x07,0x0c,0xf0,0x25,0xc0);


MIDL_DEFINE_GUID(IID, IID_IFabricGetReplicaLoadInformationResult,0xe4190ca0,0x225c,0x11e4,0x8c,0x21,0x08,0x00,0x20,0x0c,0x9a,0x66);


MIDL_DEFINE_GUID(IID, IID_IFabricGetUnplacedReplicaInformationResult,0x9D86A611,0x3FD3,0x451B,0x94,0x95,0x6A,0x83,0x1F,0x41,0x74,0x73);


MIDL_DEFINE_GUID(IID, IID_IFabricGetRepairTaskListResult,0x576b2462,0x5f69,0x4351,0x87,0xc7,0x3e,0xc2,0xd1,0x65,0x4a,0x22);


MIDL_DEFINE_GUID(IID, IID_IFabricGatewayInformationResult,0xa57e7740,0xfa33,0x448e,0x9f,0x35,0x8b,0xf8,0x02,0xa7,0x13,0xaa);


MIDL_DEFINE_GUID(IID, IID_IFabricGetRollingUpgradeMonitoringPolicyResult,0x02bd6674,0x9c5a,0x4262,0x89,0xa8,0xac,0x1a,0x6a,0x2f,0xb5,0xe9);


MIDL_DEFINE_GUID(IID, IID_IFabricGetNodeListResult2,0x4a0f2da7,0xf851,0x44e5,0x8e,0x12,0xaa,0x52,0x10,0x76,0x09,0x7a);


MIDL_DEFINE_GUID(IID, IID_IFabricGetApplicationListResult2,0x6637a860,0x26bc,0x4f1a,0x90,0x2f,0xf4,0x18,0xfc,0xfe,0x1e,0x51);


MIDL_DEFINE_GUID(IID, IID_IFabricGetServiceListResult2,0x30263683,0x4b25,0x4ec3,0x86,0xd7,0x94,0xed,0x86,0xe7,0xa8,0xbf);


MIDL_DEFINE_GUID(IID, IID_IFabricGetPartitionListResult2,0xb131b99a,0xd251,0x47b2,0x9d,0x08,0x24,0xdd,0xd6,0x79,0x32,0x06);


MIDL_DEFINE_GUID(IID, IID_IFabricGetReplicaListResult2,0x0bc12f86,0xc157,0x4c0d,0xb2,0x74,0x01,0xfb,0x09,0x14,0x59,0x34);


MIDL_DEFINE_GUID(IID, IID_IFabricRestartNodeResult,0x2f7e9d57,0xfe07,0x4e34,0x93,0xe1,0x01,0xd5,0xa6,0x29,0x8c,0xa9);


MIDL_DEFINE_GUID(IID, IID_IFabricStartNodeResult,0x7e9f51a5,0x88ac,0x49b8,0x95,0x8d,0x32,0x9e,0x33,0x34,0x80,0x2e);


MIDL_DEFINE_GUID(IID, IID_IFabricStopNodeResult,0x711d60a6,0x9623,0x476c,0x97,0x0c,0x83,0x05,0x9a,0x0b,0x4d,0x55);


MIDL_DEFINE_GUID(IID, IID_IFabricRestartDeployedCodePackageResult,0xfe087dc4,0x7a6a,0x41e3,0x90,0xe9,0xb7,0x34,0xa4,0xce,0xf4,0x1f);


MIDL_DEFINE_GUID(IID, IID_IFabricMovePrimaryResult,0x66AC03F5,0xE61C,0x47A2,0x80,0xFE,0x49,0x30,0x9A,0x02,0xC9,0x2C);


MIDL_DEFINE_GUID(IID, IID_IFabricMoveSecondaryResult,0x60FE896A,0xB690,0x4ABB,0x94,0xFD,0x86,0xC6,0x15,0xD2,0x9B,0xEE);


MIDL_DEFINE_GUID(IID, IID_IFabricGetClusterHealthChunkResult,0x7fefcf06,0xc840,0x4d8a,0x9c,0xc7,0x36,0xf0,0x80,0xe0,0xe1,0x21);


MIDL_DEFINE_GUID(IID, IID_IFabricPartitionDataLossProgressResult,0x614921e6,0x75f1,0x44e7,0x91,0x07,0xab,0x88,0x81,0x91,0x36,0xb8);


MIDL_DEFINE_GUID(IID, IID_IFabricPartitionRestartProgressResult,0xd2cb2ee1,0xa1ba,0x4cbd,0x80,0xf7,0x14,0xfd,0x3d,0x55,0xbb,0x61);


MIDL_DEFINE_GUID(IID, IID_IFabricTestCommandStatusResult,0x87798f5c,0xe600,0x493a,0xa9,0x26,0x16,0xb6,0x80,0x73,0x78,0xe6);


MIDL_DEFINE_GUID(IID, IID_IFabricOrchestrationUpgradeStatusResult,0x95A56E4A,0x490D,0x445E,0x86,0x5C,0xEF,0x0A,0x62,0xF1,0x55,0x04);


MIDL_DEFINE_GUID(IID, IID_IFabricChaosReportResult,0x8952E931,0xB2B3,0x470A,0xB9,0x82,0x6B,0x41,0x5F,0x30,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IFabricNodeTransitionProgressResult,0x68a98626,0x6a1b,0x4dd8,0xad,0x93,0x74,0xc0,0x93,0x6e,0x86,0xaa);


MIDL_DEFINE_GUID(IID, IID_IFabricGetServiceNameResult,0xb64fb70c,0xfe53,0x4ca1,0xb6,0xd9,0x23,0xd1,0x15,0x0f,0xe7,0x6c);


MIDL_DEFINE_GUID(IID, IID_IFabricGetApplicationNameResult,0x258dbcc8,0xac9a,0x47ff,0x83,0x8b,0x57,0xff,0x50,0x6c,0x73,0xb1);


MIDL_DEFINE_GUID(CLSID, CLSID_FabricClient,0x75f087fa,0x37f1,0x4984,0xb5,0x13,0x72,0x4d,0xa5,0xb0,0x21,0x97);


MIDL_DEFINE_GUID(IID, IID_IFabricClusterManagementClient8,0x0B79641C,0x79A6,0x4162,0x90,0x4A,0x84,0x0B,0xAB,0xD0,0x83,0x81);


MIDL_DEFINE_GUID(IID, IID_IFabricClusterManagementClient9,0xC0F57578,0x538C,0x4CBE,0xBB,0x55,0x80,0x98,0xB6,0xA7,0xCD,0x4E);


MIDL_DEFINE_GUID(IID, IID_IFabricClusterManagementClient10,0xA4ACEB4F,0x2E2B,0x4BE1,0x9D,0x12,0x44,0xFE,0x8C,0xB5,0xFB,0x20);


MIDL_DEFINE_GUID(IID, IID_IFabricGetPartitionLoadInformationResult,0x46f1a40c,0xa4f3,0x409e,0xa7,0xec,0x6f,0xd1,0x15,0xf7,0xac,0xc7);


MIDL_DEFINE_GUID(IID, IID_IFabricGetClusterLoadInformationResult,0x7cc3eb08,0x0e69,0x4e52,0x81,0xfc,0x01,0x90,0xab,0x99,0x7d,0xbf);


MIDL_DEFINE_GUID(IID, IID_IFabricUpgradeOrchestrationServiceStateResult,0x413968AA,0x2EB7,0x4023,0xB9,0xDC,0x0F,0x21,0x60,0xB7,0x6A,0x6D);


MIDL_DEFINE_GUID(IID, IID_IFabricPartitionQuorumLossProgressResult,0x36d8e378,0x3706,0x403d,0x8d,0x99,0x2a,0xfd,0x1a,0x12,0x06,0x87);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif

