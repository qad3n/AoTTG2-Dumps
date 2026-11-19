// ==================== AoTTG2 cross-reference ====================
// Type: Utility.RandomGen
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/RandomGen.c
// Prior real C# source (older reference): Assets/Scripts/Utility/RandomGen.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x2000930")]
public static class RandomGen
{
	[Token(Token = "0x60056AB")]
	[Address(RVA = "0x5CF01F0", Offset = "0x5CEF1F0", VA = "0x5CF01F0")]
	public static bool GetRandomBool()
	{
		// Lifted from source/cpp/Utility/RandomGen.c (Utility.RandomGen$$GetRandomBool): clean
		float fVar1;

		fVar1 = Random.Range(0.0, 1.0);
		return 0.5 < fVar1;
	}

	[Token(Token = "0x60056AC")]
	[Address(RVA = "0x5CF0210", Offset = "0x5CEF210", VA = "0x5CF0210")]
	public static float GetRandomSign()
	{
		// Lifted from source/cpp/Utility/RandomGen.c (Utility.RandomGen$$GetRandomSign): 1 lines keep C-only constructs
		float fVar1;

		fVar1 = Random.Range(0.0, 1.0);
		return *(float)(&g_data_0100ad30 + (ulong)(0.5 < fVar1) * 4);
	}

	[Token(Token = "0x60056AD")]
	[Address(RVA = "0x5CF0240", Offset = "0x5CEF240", VA = "0x5CF0240")]
	public static bool Roll(float probability)
	{
		// Lifted from source/cpp/Utility/RandomGen.c (Utility.RandomGen$$Roll): clean
		float fVar1;

		fVar1 = Random.Range(0.0, 1.0);
		return fVar1 < probability;
	}

	[Token(Token = "0x60056AE")]
	[Address(RVA = "0x5CF0270", Offset = "0x5CEF270", VA = "0x5CF0270")]
	public static Vector3 GetRandomDirection(bool flat = false)
	{
		// Lifted from source/cpp/Utility/RandomGen.c (Utility.RandomGen$$GetRandomDirection): 43 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		ulong uVar4;
		UnityEngine_Vector3_StaticFields pUVar5;
		undefined7 in_register_00000039;
		float fVar6;
		float fVar7;
		float extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Db_01;
		float extraout_XMM0_Dd;
		byte[] auVar10 = new byte[16];
		byte[] auVar8 = new byte[16];
		byte[] auVar9 = new byte[16];
		byte[] auVar11 = new byte[16];
		uint uVar12;
		Vector3 UVar13;
		byte[] local_30 = new byte[12];
		float fStack_24;
		float local_18;
		float fStack_14;
		float fStack_c;

		local_18 = Random.Range(-1.0, 1.0);
		fStack_14 = extraout_XMM0_Db;
		fStack_c = extraout_XMM0_Dd;
		fVar6 = Random.Range(-1.0, 1.0);
		fVar7 = Random.Range(-1.0, 1.0);
		stack0xffffffffffffffd8 = ZEXT816(0);
		if ((int)CONCAT71(in_register_00000039, _flat) == 0) {
			stack0xffffffffffffffd8 = ZEXT416((uint)fVar6);
		}
		if (Il2CppMethodInitialized_0753e72d == false) {
			uVar12 = 0;
			Il2CppMethodInitialized_0753e72d = true;
			local_30._0_4_ = 0.0;
			local_30._4_4_ = 0.0;
		}
		else {
			local_30._0_4_ = 0.0;
			local_30._4_4_ = 0.0;
			uVar12 = extraout_XMM0_Db_00;
		}
		if (g_data_0753e729 == false) {
			local_30._0_4_ = 0.0;
			local_30._4_4_ = 0.0;
			uVar12 = 0;
			g_data_0753e729 = true;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			local_30._0_4_ = 0.0;
			local_30._4_4_ = 0.0;
			uVar3 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
			uVar12 = 0;
		}
		uVar4 = stack0xffffffffffffffd8;
		fVar6 = fVar7 * fVar7 + (float)local_30._8_4_ * (float)local_30._8_4_ + local_18 * local_18;
		if (fVar6 < 0.0) {
			fVar6 = sqrtf(fVar6);
			uVar12 = extraout_XMM0_Db_01;
			uVar4 = stack0xffffffffffffffd8;
		}
		else {
			fVar6 = SQRT(fVar6);
		}
		if (1e-05 < fVar6) {
			auVar9._4_4_ = fStack_14;
			auVar9._0_4_ = local_18;
			local_30._8_4_ = SUB84(uVar4, 0);
			fStack_24 = SUB84(uVar4, 4);
			auVar9._8_4_ = fStack_14;
			auVar9._12_4_ = fStack_c;
			auVar8._8_8_ = auVar9._8_8_;
			auVar8._4_4_ = local_30._8_4_;
			auVar8._0_4_ = local_18;
			auVar10._0_12_ = auVar8._0_12_;
			auVar10._12_4_ = fStack_24;
			fVar7 = fVar7 / fVar6;
			auVar11._4_4_ = fVar6;
			auVar11._0_4_ = fVar6;
			auVar11._8_4_ = uVar12;
			auVar11._12_4_ = uVar12;
			auVar11 = divps(auVar10, auVar11);
			local_30._0_4_ = auVar11._0_4_;
			local_30._4_4_ = auVar11._4_4_;
			pUVar5 = (UnityEngine_Vector3_StaticFields)local_30;
		}
		else {
			pUVar5 = typeof(Vector3).static_fields;
			fVar7 = (pUVar5.zeroVector).z;
		}
		uVar1 = (pUVar5.zeroVector).x;
		uVar2 = (pUVar5.zeroVector).y;
		UVar13.y = (float)uVar2;
		UVar13.x = (float)uVar1;
		UVar13.z = fVar7;
		return (Vector3)UVar13;
	}

	[Token(Token = "0x60056AF")]
	public static T ChooseRandom<T>(List<T> items)
	{
		return (T)null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/RandomGen.c.

	// Utility.RandomGen$$ChooseRandom<object>: 1 lines keep C-only constructs
	private static object ChooseRandom_object(List<T> items)
	{
		int index;
		object pIVar1;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
		}
		if (items == null) {
			throw new NullReferenceException();
		}
		index = Random.Range(0, items._size);
		return pIVar1;
	}

	// Utility.RandomGen$$ChooseRandom<__Il2CppFullySharedGenericType>: 19 lines keep C-only constructs
	private static __Il2CppFullySharedGenericType ChooseRandom___Il2CppFullySharedGenericType(List<T> items)
	{
		Il2CppMethodPointer pIVar1;
		ulong puVar2;
		ulong uVar3;
		code *pcVar4;
		long lVar5;
		int maxExclusive;
		Il2CppRGCTXData pIVar6;
		MethodInfo in_RDX;
		IntPtr extraout_RDX;
		IntPtr __src;
		ulong __n;
		__Il2CppFullySharedGenericType UVar7;
		ulong uStack_50;
		int local_48;
		int local_34;

		pIVar6 = (in_RDX.field7_0x38).rgctx_data;
		if (pIVar6 == null) {
			uStack_50 = 0x375f43b;
			il2cpp_codegen_rgctx_method_init(in_RDX);
			pIVar6 = (in_RDX.field7_0x38).rgctx_data;
		}
		__n = (ulong)((pIVar6[3].klass)._2).stack_slot_size;
		lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
		__src = (IntPtr)((long)&local_48 + lVar5);
		if (items == null) {
			*(ulong)((long)&uStack_50 + lVar5) = 0x375f4bd;
			throw new NullReferenceException();
		}
		pIVar1 = (pIVar6[1].method).methodPointer;
		*(ulong)((long)&uStack_50 + lVar5) = 0x375f469;
		maxExclusive = (*pIVar1)();
		*(ulong)((long)&uStack_50 + lVar5) = 0x375f474;
		local_34 = Random.Range(0, maxExclusive);
		puVar2 = *(ulong*)((long)(in_RDX.field7_0x38).methodMetadataHandle + 0x10);
		uVar3 = *puVar2;
		local_48 = &local_34;
		pcVar4 = (code)puVar2[2];
		*(ulong)((long)&uStack_50 + lVar5) = 0x375f49b;
		(*pcVar4)(uVar3,puVar2,items,&local_48,__src);
		*(ulong)((long)&uStack_50 + lVar5) = 0x375f4a9;
		UVar7.klass = memcpy(method, __src, __n);
		UVar7.monitor = extraout_RDX;
		return UVar7;
	}
}
