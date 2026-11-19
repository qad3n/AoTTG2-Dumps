// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Util
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Utility/Util.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Util.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using SimpleJSONFixed;
using UnityEngine;
using UnityEngine.AI;

namespace Utility;

[Token(Token = "0x2000938")]
internal static class Util
{
	[Token(Token = "0x200093E")]
	[CompilerGenerated]
	private sealed class _003CWaitForFrames_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002E78")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002E79")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002E7A")]
		[FieldOffset(Offset = "0x20")]
		public int frames;

		[Token(Token = "0x4002E7B")]
		[FieldOffset(Offset = "0x24")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000F03")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005714")]
			[Address(RVA = "0x5CF4560", Offset = "0x5CF3560", VA = "0x5CF4560", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Utility/Util.c (Utility.Util.<WaitForFrames>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F04")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005716")]
			[Address(RVA = "0x5CF45B0", Offset = "0x5CF35B0", VA = "0x5CF45B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Utility/Util.c (Utility.Util.<WaitForFrames>d__17$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005711")]
		[Address(RVA = "0x5CF1D70", Offset = "0x5CF0D70", VA = "0x5CF1D70")]
		[DebuggerHidden]
		public _003CWaitForFrames_003Ed__17(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Utility/Util.c (Utility.Util.<WaitForFrames>d__17$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005712")]
		[Address(RVA = "0x5CF44B0", Offset = "0x5CF34B0", VA = "0x5CF44B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Utility/Util.c (Utility.Util.<WaitForFrames>d__17$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005713")]
		[Address(RVA = "0x5CF44C0", Offset = "0x5CF34C0", VA = "0x5CF44C0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Utility/Util.c (Utility.Util.<WaitForFrames>d__17$$MoveNext): clean
			int iVar1;
			object __this_00;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -1;
				iVar1 = this._i_5__2 + 1;
				this._i_5__2 = iVar1;
				if (iVar1 < this.frames) {
		label_05df4522: ;
					__this_00 = new WaitForEndOfFrame();
					this.__2__current = __this_00;
					this.__1__state = 1;
					return true;
				}
			}
			else if (iVar1 == 0) {
				this.__1__state = -1;
				this._i_5__2 = 0;
				if (0 < this.frames) goto label_05df4522;
			}
			return false;
		}

		[Token(Token = "0x6005715")]
		[Address(RVA = "0x5CF4570", Offset = "0x5CF3570", VA = "0x5CF4570", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Utility/Util.c (Utility.Util.<WaitForFrames>d__17$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Utility_Util_WaitForFrames_d__17_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200093F")]
	[CompilerGenerated]
	private sealed class _003CYieldForFrames_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002E7C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002E7D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002E7E")]
		[FieldOffset(Offset = "0x20")]
		public int frames;

		[Token(Token = "0x4002E7F")]
		[FieldOffset(Offset = "0x24")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000F05")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600571A")]
			[Address(RVA = "0x5CF4630", Offset = "0x5CF3630", VA = "0x5CF4630", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Utility/Util.c (Utility.Util.<YieldForFrames>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F06")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600571C")]
			[Address(RVA = "0x5CF4680", Offset = "0x5CF3680", VA = "0x5CF4680", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Utility/Util.c (Utility.Util.<YieldForFrames>d__18$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005717")]
		[Address(RVA = "0x5CF1DF0", Offset = "0x5CF0DF0", VA = "0x5CF1DF0")]
		[DebuggerHidden]
		public _003CYieldForFrames_003Ed__18(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Utility/Util.c (Utility.Util.<YieldForFrames>d__18$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005718")]
		[Address(RVA = "0x5CF45C0", Offset = "0x5CF35C0", VA = "0x5CF45C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Utility/Util.c (Utility.Util.<YieldForFrames>d__18$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005719")]
		[Address(RVA = "0x5CF45D0", Offset = "0x5CF35D0", VA = "0x5CF45D0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Utility/Util.c (Utility.Util.<YieldForFrames>d__18$$MoveNext): clean
			int iVar1;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -1;
				iVar1 = this._i_5__2 + 1;
				this._i_5__2 = iVar1;
				if (iVar1 < this.frames) {
		label_05df460d: ;
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
			}
			else if (iVar1 == 0) {
				this.__1__state = -1;
				this._i_5__2 = 0;
				if (0 < this.frames) goto label_05df460d;
			}
			return false;
		}

		[Token(Token = "0x600571B")]
		[Address(RVA = "0x5CF4640", Offset = "0x5CF3640", VA = "0x5CF4640", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Utility/Util.c (Utility.Util.<YieldForFrames>d__18$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Utility_Util_YieldForFrames_d__18_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002E67")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<KeyValuePair<float, string>> _agentSizes;

	[Token(Token = "0x4002E68")]
	[FieldOffset(Offset = "0x8")]
	private static readonly HashSet<string> ReservedFileNames;

	[Token(Token = "0x60056C3")]
	[Address(RVA = "0x5CF10B0", Offset = "0x5CF00B0", VA = "0x5CF10B0")]
	public static float SignedAngle(Vector3 from, Vector3 to, Vector3 axis)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$SignedAngle): 10 lines keep C-only constructs
		Il2CppClass klass;
		uint uVar1;
		float fVar2;
		float fVar3;
		double dVar4;
		float fVar6;
		byte[] auVar5 = new byte[12];
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float local_18;
		float fStack_14;

		fVar10 = to.z;
		fVar8 = to.x;
		fVar9 = to.y;
		fVar7 = from.z;
		fVar2 = from.x;
		fVar6 = from.y;
		fVar3 = fVar7 * fVar7 + fVar6 * fVar6 + fVar2 * fVar2;
		fVar11 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
		if (fVar3 * fVar11 < 0.0) {
			fVar3 = sqrtf(fVar3 * fVar11);
			klass = typeof(Math);
		}
		else {
			fVar3 = SQRT(fVar3 * fVar11);
			klass = typeof(Math);
		}
		fVar11 = 0.0;
		typeof(Math) = (Math)klass;
		if (1e-15 <= fVar3) {
			fVar3 = (fVar7 * fVar10 + fVar6 * fVar9 + fVar2 * fVar8) / fVar3;
			auVar5 = ZEXT812(0x3f800000);
			if (fVar3 <= auVar5._0_4_) {
				auVar5._4_8_ = auVar5._4_8_;
				auVar5._0_4_ = fVar3;
			}
			dVar4 = acos((double)(float)(~-(uint)(-1.0 <= fVar3) & 0xbf800000 | auVar5._0_4_ & -(uint)(-1.0 <= fVar3)), (MethodInfo)klass);
			fVar11 = (float)dVar4 * 57.29578;
		}
		local_18 = axis.x;
		fStack_14 = axis.y;
		uVar1 = -(uint)(0.0 <= (fVar9 * fVar2 - fVar6 * fVar8) * axis.z +(fVar7 * fVar8 - fVar10 * fVar2) * fStack_14 +(fVar10 * fVar6 - fVar7 * fVar9) * local_18);
		return (float)(~uVar1 & (uint)-fVar11 | (uint)fVar11 & uVar1);
	}

	[Token(Token = "0x60056C4")]
	[Address(RVA = "0x5CF1320", Offset = "0x5CF0320", VA = "0x5CF1320")]
	public static bool IsVectorBetween(Vector3 v, Vector3 start, Vector3 end)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$IsVectorBetween): clean
		bool bVar1;
		bool bVar2;
		byte bVar3;
		float fVar4;
		float fVar5;

		fVar5 = v.z;
		fVar4 = v.x;
		if (((fVar4 < start.x) || (bVar2 = true, end.x < fVar4)) &&(bVar2 = false, end.x <= fVar4)) {
			bVar2 = fVar4 <= start.x;
		}
		fVar4 = v.y;
		if (((fVar4 < start.y) || (bVar1 = true, end.y < fVar4)) &&(bVar1 = false, end.y <= fVar4)) {
			bVar1 = fVar4 <= start.y;
		}
		if (((fVar5 < start.z) || (bVar3 = 1, end.z < fVar5)) && (bVar3 = 0, end.z <= fVar5)) {
			return (bool)(bVar1 & bVar2 & fVar5 <= start.z);
		}
		return (bool)(bVar1 & bVar2 & bVar3);
	}

	[Token(Token = "0x60056C5")]
	[Address(RVA = "0x5CF1390", Offset = "0x5CF0390", VA = "0x5CF1390")]
	public static float LinearMap(float x, float inMin, float inMax, float outMin, float outMax)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$LinearMap): clean
		return ((x - inMin) * (outMax - outMin)) / (inMax - inMin) + outMin;
	}

	[Token(Token = "0x60056C6")]
	[Address(RVA = "0x5CF13B0", Offset = "0x5CF03B0", VA = "0x5CF13B0")]
	public static float ClampedLinearMap(float x, float inMin, float inMax, float outMin, float outMax)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$ClampedLinearMap): clean
		float fVar1;

		fVar1 = ((x - inMin) * (outMax - outMin)) / (inMax - inMin) + outMin;
		if (fVar1 <= outMax) {
			outMax = fVar1;
		}
		return (float)(~-(uint)(outMin <= fVar1) & (uint)outMin | (uint)outMax & -(uint)(outMin <= fVar1));
	}

	[Token(Token = "0x60056C7")]
	[Address(RVA = "0x5CF13E0", Offset = "0x5CF03E0", VA = "0x5CF13E0")]
	public static BaseCharacter FindCharacterByViewId(int viewId)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$FindCharacterByViewId): clean
		bool bVar1;
		PhotonView x;
		BaseCharacter pCVar2;

		if (-1 < viewId) {
			x = PhotonView.Find(viewId);
			bVar1 = ((Object)x == null);
			if (!bVar1) {
				if (x == null) {
					throw new NullReferenceException();
				}
				pCVar2 = x.GetComponent<BaseCharacter>();
				return pCVar2;
			}
		}
		return null;
	}

	[Token(Token = "0x60056C8")]
	[Address(RVA = "0x5CF1470", Offset = "0x5CF0470", VA = "0x5CF1470")]
	public static Player FindPlayerById(int id)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$FindPlayerById): clean
		uint uVar1;
		int iVar2;
		Player pPVar3;
		Player[] pPVar4;
		int iVar5;

		if (Il2CppMethodInitialized_075482f5 == false) {
			Il2CppMethodInitialized_075482f5 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pPVar4 = PhotonNetwork.PlayerList;
		}
		else {
			pPVar4 = PhotonNetwork.PlayerList;
		}
		if (pPVar4 == null) {
	label_05df14ff: ;
			throw new NullReferenceException();
		}
		iVar2 = (int)pPVar4.Length;
		if (0 < iVar2) {
			iVar5 = 0;
			do {
				pPVar3 = pPVar4[iVar5];
				if (pPVar3 == null) goto label_05df14ff;
				if (pPVar3.actorNumber == id) {
					return pPVar3;
				}
				iVar5 = iVar5 + 1;
			} while (iVar2 != iVar5);
		}
		return null;
	}

	[Token(Token = "0x60056C9")]
	[Address(RVA = "0x5CF1510", Offset = "0x5CF0510", VA = "0x5CF1510")]
	public static PhotonMessageInfo CreateLocalPhotonInfo()
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$CreateLocalPhotonInfo): 1 lines keep C-only constructs
		*(ulong)&__return_storage_ptr__.fields = 0;
		__return_storage_ptr__.Sender = null;
		__return_storage_ptr__.photonView = null;
		__return_storage_ptr__ = new PhotonMessageInfo(null, 0, null);
		return __return_storage_ptr__;
	}

	[Token(Token = "0x60056CA")]
	[Address(RVA = "0x5CF1540", Offset = "0x5CF0540", VA = "0x5CF1540")]
	public static string PascalToSentence(string str)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$PascalToSentence): 1 lines keep C-only constructs
		uint uVar1;
		object @object;
		String pSVar2;
		Utility_Util___c_StaticFields pUVar3;
		MatchEvaluator __this;

		pSVar2 = "[a-z][A-Z]";
		pUVar3 = typeof(Util.c).static_fields;
		__this = pUVar3.__9__7_0;
		if (__this == null) {
			if ((typeof(Util.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(Util.c).static_fields;
			}
			@object = (object)pUVar3.__9;
			__this = new MatchEvaluator(@object, (intptr_t)MethodInfo_Utility_Util_c_PascalToSentence_b__7_0);
			pUVar3 = typeof(Util.c).static_fields;
			pUVar3.__9__7_0 = __this;
			uVar1 = (typeof(Regex)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Regex)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = Regex.Replace(str, pSVar2, __this);
		return pSVar2;
	}

	[Token(Token = "0x60056CB")]
	public static T CreateDontDestroyObj<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x60056CC")]
	public static T CreateObj<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x60056CD")]
	public static HashSet<T> RemoveNull<T>(HashSet<T> set) where T : UnityEngine.Object
	{
		return null;
	}

	[Token(Token = "0x60056CE")]
	public static HashSet<T> RemoveNullOrDead<T>(HashSet<T> set) where T : BaseCharacter
	{
		return null;
	}

	[Token(Token = "0x60056CF")]
	public static HashSet<T> RemoveNullOrDeadDetections<T>(HashSet<T> set) where T : BaseDetection
	{
		return null;
	}

	[Token(Token = "0x60056D0")]
	[Address(RVA = "0x5CF1680", Offset = "0x5CF0680", VA = "0x5CF1680")]
	public static HashSet<BaseShifter> RemoveNullOrDeadShifters(HashSet<BaseShifter> set)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$RemoveNullOrDeadShifters): 1 lines keep C-only constructs
		uint uVar1;
		object @object;
		Utility_Util___c_StaticFields pUVar2;
		Predicate<T> match;

		if (Il2CppMethodInitialized_075482f7 == false) {
			Il2CppMethodInitialized_075482f7 = true;
			uVar1 = (typeof(Util.c)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Util.c)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pUVar2 = typeof(Util.c).static_fields;
			match = (Predicate<T>)pUVar2.__9__13_0;
		}
		else {
			pUVar2 = (typeof(Util.c)).static_fields;
			match = (Predicate<T>)pUVar2.__9__13_0;
		}
		if (match == null) {
			if (((typeof(Util.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar2 = typeof(Util.c).static_fields;
			}
			@object = (object)pUVar2.__9;
			match = new Predicate<BaseShifter>(@object, (intptr_t)MethodInfo_Utility_Util_c_RemoveNullOrDeadShifters_b__13_0) ;
			pUVar2 = typeof(Util.c).static_fields;
			pUVar2.__9__13_0 = (Predicate<BaseShifter>)match;
		}
		if (set == null) {
			throw new NullReferenceException();
		}
		set.RemoveWhere(match);
		return set;
	}

	[Token(Token = "0x60056D1")]
	[Address(RVA = "0x5CF17D0", Offset = "0x5CF07D0", VA = "0x5CF17D0")]
	public static string CreateMD5(string input)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$CreateMD5): 3 lines keep C-only constructs
		uint uVar1;
		HashAlgorithm pSVar2;
		MD5 __this;
		bool bVar4;
		int iVar5;
		Encoding pSVar6;
		Byte[] pSVar7;
		StringBuilder __this_00;
		ulong uVar8;
		String pSVar9;
		ulong uVar11;
		MD5 local_40;
		MD5* local_30;

		local_40 = null;
		bVar4 = (input == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar4) {
			pSVar9 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			local_40 = MD5.Create();
			local_30 = &local_40;
			pSVar6 = Encoding.UTF8;
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			pSVar7 = pSVar6.GetBytes(input);
			if (local_40 == null) {
				throw new NullReferenceException();
			}
			pSVar7 = local_40.ComputeHash(pSVar7);
			__this_00 = new StringBuilder();
			if (pSVar7 == null) {
				throw new NullReferenceException();
			}
			iVar5 = (int)pSVar7.Length;
			if (__this_00 == null) {
				if (0 < iVar5) {
					(pSVar7.m_Items).ToString("X2");
					throw new NullReferenceException();
				}
	label_05df1a25: ;
				throw new NullReferenceException();
			}
			if (0 < iVar5) {
				uVar8 = pSVar7.Length & 0xffffffff;
				uVar11 = 0;
				do {
					if (uVar8 <= uVar11) {
						throw new IndexOutOfRangeException();
					}
					pSVar9 = (pSVar7.m_Items + uVar11).ToString("X2");
					__this_00.Append(pSVar9);
					uVar11 = uVar11 + 1;
					uVar1 = (uint)pSVar7.Length;
					uVar8 = (ulong)uVar1;
				} while ((long)uVar11 < (long)(int)uVar1);
				if (__this_00 == null) goto label_05df1a25;
			}
			pSVar9 = __this_00.ToString();
			__this = local_40;
			if (local_40 != null) {
				pSVar2 = (HashAlgorithm)local_40.klass;
				uVar8 = (ulong)(pSVar2._2).interface_offsets_count;
				__this.Dispose();
			}
		}
		return pSVar9;
	}

	[Token(Token = "0x60056D2")]
	[Address(RVA = "0x5CF1AA0", Offset = "0x5CF0AA0", VA = "0x5CF1AA0")]
	public static string CreateSalt()
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$CreateSalt): 3 lines keep C-only constructs
		object __this;
		Byte[] inArray;
		String pSVar4;
		object local_30;
		object* local_20;

		inArray = (Byte[])new byte[0x10];
		local_30 = (object)RandomNumberGenerator.Create();
		local_20 = &local_30;
		if (local_30 == null) {
			throw new NullReferenceException();
		}
		(*(((System_Security_Cryptography_RandomNumberGenerator_VTable)local_30.klass.vtable)._6_unknown). methodPtr)(local_30,inArray,(((System_Security_Cryptography_RandomNumberGenerator_VTable)local_30.klass.vtable). _6_unknown).method);
		__this = local_30;
		if (local_30 != null) {
			__this.Dispose();
		}
		return pSVar4;
	}

	[Token(Token = "0x60056D3")]
	[Address(RVA = "0x5CF1C30", Offset = "0x5CF0C30", VA = "0x5CF1C30")]
	public static string CreatePBKDF2(string input, string salt)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$CreatePBKDF2): clean
		bool bVar1;
		Byte[] pSVar2;
		HashAlgorithmName hashAlgorithm;
		Rfc2898DeriveBytes __this;
		String pSVar3;

		bVar1 = (input == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar2 = Convert.FromBase64String(salt);
		hashAlgorithm = HashAlgorithmName.SHA256;
		__this = new Rfc2898DeriveBytes(input, pSVar2, 200000, hashAlgorithm);
		if (__this != null) {
			pSVar2 = __this.GetBytes(0x10);
			pSVar3 = BitConverter.ToString(pSVar2);
			if (pSVar3 != null) {
				pSVar3 = pSVar3.Replace("-", (String)**(ulong*)(g_data_07556758 + 0xb8));
				return pSVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60056D4")]
	[Address(RVA = "0x5CE7300", Offset = "0x5CE6300", VA = "0x5CE7300")]
	[IteratorStateMachine(typeof(_003CWaitForFrames_003Ed__17))]
	public static IEnumerator WaitForFrames(int frames)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$WaitForFrames): clean
		Util.d__17<WaitForFrames> __this;

		__this = new Util.d__17<WaitForFrames>();
		__this.__1__state = 0;
		__this.frames = frames;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x60056D5")]
	[Address(RVA = "0x5CF1D90", Offset = "0x5CF0D90", VA = "0x5CF1D90")]
	[IteratorStateMachine(typeof(_003CYieldForFrames_003Ed__18))]
	public static IEnumerator YieldForFrames(int frames)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$YieldForFrames): clean
		Util.d__18<YieldForFrames> __this;

		__this = new Util.d__18<YieldForFrames>();
		__this.__1__state = 0;
		__this.frames = frames;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x60056D6")]
	public static string[] EnumToStringArray<T>()
	{
		return null;
	}

	[Token(Token = "0x60056D7")]
	public static string[] EnumToStringArrayExceptNone<T>()
	{
		return null;
	}

	[Token(Token = "0x60056D8")]
	public static List<T> EnumToList<T>()
	{
		return null;
	}

	[Token(Token = "0x60056D9")]
	public static Dictionary<string, T> EnumToDict<T>()
	{
		return null;
	}

	[Token(Token = "0x60056DA")]
	[Address(RVA = "0x5CF1E10", Offset = "0x5CF0E10", VA = "0x5CF1E10")]
	public static string FormatFloat(float num, int decimalPlaces)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$FormatFloat): clean
		String pSVar1;
		float local_c;

		local_c = num;
		if (decimalPlaces == 0) {
			pSVar1 = "0";
		}
		else {
			pSVar1 = 0x0.CreateString(0x30, decimalPlaces);
			pSVar1 = String.Concat("0.", pSVar1);
		}
		pSVar1 = local_c.ToString(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60056DB")]
	[Address(RVA = "0x5CF1E90", Offset = "0x5CF0E90", VA = "0x5CF1E90")]
	public static Vector3 MultiplyVectors(Vector3 a, Vector3 b)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$MultiplyVectors): clean
		Vector3 UVar1;

		UVar1.x = a.x * b.x;
		UVar1.y = a.y * b.y;
		UVar1.z = a.z * b.z;
		return (Vector3)UVar1;
	}

	[Token(Token = "0x60056DC")]
	[Address(RVA = "0x5CF1EA0", Offset = "0x5CF0EA0", VA = "0x5CF1EA0")]
	public static Vector2 MultiplyVectors(Vector2 a, Vector2 b)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$MultiplyVectors): clean
		Vector2 UVar1;

		UVar1.y = a.y * b.y;
		UVar1.x = a.x * b.x;
		return (Vector2)UVar1;
	}

	[Token(Token = "0x60056DD")]
	[Address(RVA = "0x5CF1EB0", Offset = "0x5CF0EB0", VA = "0x5CF1EB0")]
	public static Vector3 DivideVectors(Vector3 a, Vector3 b)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$DivideVectors): 10 lines keep C-only constructs
		ulong in_XMM0_Qb;
		byte[] auVar2 = new byte[16];
		byte[] auVar1 = new byte[16];
		ulong in_XMM2_Qb;
		Vector3 UVar3;

		auVar2._0_8_ = a._0_8_;
		auVar2._8_8_ = in_XMM0_Qb;
		auVar1._8_8_ = in_XMM2_Qb;
		auVar1._0_8_ = b._0_8_;
		auVar1 = divps(auVar2, auVar1);
		UVar3.z = a.z / b.z;
		UVar3._0_8_ = auVar1._0_8_;
		return (Vector3)UVar3;
	}

	[Token(Token = "0x60056DE")]
	[Address(RVA = "0x5CF1EC0", Offset = "0x5CF0EC0", VA = "0x5CF1EC0")]
	public static Vector2 DivideVectors(Vector2 a, Vector2 b)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$DivideVectors): 10 lines keep C-only constructs
		ulong in_XMM0_Qb;
		byte[] auVar2 = new byte[16];
		byte[] auVar1 = new byte[16];
		ulong in_XMM1_Qb;

		auVar2._8_8_ = in_XMM0_Qb;
		auVar2._0_8_ = a;
		auVar1._8_8_ = in_XMM1_Qb;
		auVar1._0_8_ = b;
		auVar1 = divps(auVar2, auVar1);
		return (Vector2)auVar1._0_8_;
	}

	[Token(Token = "0x60056DF")]
	public static List<List<T>> GroupItems<T>(List<T> items, int groupSize)
	{
		return null;
	}

	[Token(Token = "0x60056E0")]
	public static List<List<T>> GroupBuckets<T>(List<T> items, int buckets)
	{
		return null;
	}

	[Token(Token = "0x60056E1")]
	[Address(RVA = "0x5CF1ED0", Offset = "0x5CF0ED0", VA = "0x5CF1ED0")]
	public static object GetRandomFromWeightedList(List<object> values, List<float> weights)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$GetRandomFromWeightedList): 4 lines keep C-only constructs
		bool bVar1;
		object pIVar2;
		int index;
		float fVar3;
		float fVar4;
		float fVar5;
		float local_50;
		byte[] local_48 = new byte[16];
		object local_38;

		local_48._0_8_ = null;
		local_48._8_4_ = 0;
		local_48._12_4_ = 0;
		local_38 = null;
		if (weights != null) {
			local_48.GetEnumerator(weights);
			local_50 = 0.0;
			while (bVar1 = local_48.MoveNext()) {
				local_50 = local_50 + local_38._0_4_;
			}
			local_48.Dispose();
			index = 0;
			fVar3 = Random.Range(0.0, local_50);
			if (values != null) {
				if (0 < values._size) {
					fVar5 = 0.0;
					index = 0;
					do {
						if ((fVar5 <= fVar3) &&(fVar4 = weights.get_Item(index), fVar3 < fVar4 + fVar5)) goto label_05df2064;
						fVar4 = weights.get_Item(index);
						fVar5 = fVar5 + fVar4;
						index = index + 1;
					} while (index < values._size);
					index = 0;
				}
	label_05df2064: ;
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60056E2")]
	[Address(RVA = "0x5CF20F0", Offset = "0x5CF10F0", VA = "0x5CF20F0")]
	public static object GetRandomFromWeightedNode(JSONNode node)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$GetRandomFromWeightedNode): 16 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Object[] pSVar3;
		Single[] pSVar4;
		bool bVar5;
		List<object> __this;
		List<float> __this_00;
		String pSVar6;
		JSONNode pSVar7;
		object pIVar8;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar9;
		MethodInfo extraout_RDX_01;
		float item;
		JSONNode.Enumerator local_118;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_118.m_Array._list = null;
		local_118.m_Array._index = 0;
		local_118.m_Array._version = 0;
		local_118.m_Object._current.value = null;
		local_118.m_Object._getEnumeratorRetType = 0;
		local_118.m_Object._36_4_ = 0;
		local_118.m_Object._version = 0;
		local_118.m_Object._index = 0;
		local_118.m_Object._current.key = null;
		local_118.type = 0;
		local_118._4_4_ = 0;
		local_118.m_Object._dictionary = null;
		local_118.m_Array._current = null;
		__this = new List<object>();
		__this_00 = new List<float>();
		if (node == null) {
	label_05df2445: ;
			throw new NullReferenceException();
		}
		local_78 = node.Keys;
		local_c8.m_Array._current = local_78.m_Array._current;
		local_c8.m_Array._list = local_78.m_Array._list;
		local_c8.m_Array._index = local_78.m_Array._index;
		local_c8.m_Array._version = local_78.m_Array._version;
		local_c8.m_Object._current.value = local_78.m_Object._current.value;
		local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
		local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
		local_c8.m_Object._version = local_78.m_Object._version;
		local_c8.m_Object._index = local_78.m_Object._index;
		local_c8.m_Object._current.key = local_78.m_Object._current.key;
		local_c8.type = local_78.type;
		local_c8._4_4_ = local_78._4_4_;
		local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
		local_118 = local_c8.GetEnumerator();
		bVar5 = local_118.MoveNext();
		pMVar9 = extraout_RDX;
		if (bVar5) {
			if (__this == null) {
				pSVar6 = local_118.Current;
				pSVar7 = ((JSONNode)pSVar6);
				if (pSVar7 != null) {
					pSVar7.get_Value();
					throw new NullReferenceException();
				}
				goto label_05df2445;
			}
			do {
				pSVar6 = local_118.Current;
				pSVar7 = ((JSONNode)pSVar6);
				if (pSVar7 == null) goto label_05df2445;
				pSVar6 = pSVar7.get_Value();
				pMVar9 = MethodInfo_System_Collections_Generic_List_object_Add;
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this._items;
				if (pSVar3 == null) goto label_05df2445;
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this._size = uVar2 + 1;
					pSVar3[(int)uVar2] = (object)pSVar6;
				}
				else {
					__this.AddWithResize((object)pSVar6);
				}
				pSVar6 = pSVar7.get_Value();
				pSVar7 = node.get_Item(pSVar6);
				if ((pSVar7 == null) ||(item = pSVar7.get_AsFloat(), pMVar9 = MethodInfo_System_Collections_Generic_List_float_Add, __this_00 == null)) goto label_05df2445;
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar4 = __this_00._items;
				if (pSVar4 == null) goto label_05df2445;
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar4.Length) {
					__this_00._size = uVar2 + 1;
					pSVar4[(int)uVar2] = item;
				}
				else {
					__this_00.AddWithResize(item);
				}
				bVar5 = local_118.MoveNext();
				pMVar9 = extraout_RDX_00;
			} while (bVar5);
		}
		if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
			pMVar9 = extraout_RDX_01;
		}
		pIVar8 = Util.GetRandomFromWeightedList(__this, __this_00);
		return pIVar8;
	}

	[Token(Token = "0x60056E3")]
	[Address(RVA = "0x5CF2470", Offset = "0x5CF1470", VA = "0x5CF2470")]
	public static float DistanceIgnoreY(Vector3 a, Vector3 b)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$DistanceIgnoreY): clean
		float fVar1;
		float fVar2;

		fVar1 = a.x - b.x;
		fVar2 = a.z - b.z;
		fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
		if (0.0 <= fVar1) {
			return SQRT(fVar1);
		}
		fVar1 = sqrtf(fVar1);
		return fVar1;
	}

	[Token(Token = "0x60056E4")]
	public static List<TValue> PaginateDictionary<TKey, TValue>(Dictionary<TKey, TValue> dict, int pageNumber, int elementsPerPage)
	{
		return null;
	}

	[Token(Token = "0x60056E5")]
	[Address(RVA = "0x5CF24B0", Offset = "0x5CF14B0", VA = "0x5CF24B0")]
	public static string ColorText(string text, string color)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$ColorText): clean
		String[] values;
		String pSVar1;

		values = (String[])new string[5];
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = "<color=";
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = color;
				if (2 < (uint)values.Length) {
					values[2] = ">";
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = text;
						if (4 < (uint)values.Length) {
							values[4] = "</color>";
							return pSVar1;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60056E6")]
	[Address(RVA = "0x5CF25D0", Offset = "0x5CF15D0", VA = "0x5CF25D0")]
	public static string SizeText(string text, int size)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$SizeText): clean
		object arg0;
		String pSVar1;
		byte[] auStack_14 = new byte[4];

		arg0 = (object)auStack_14;
		pSVar1 = String.Format("<size={0}>{1}</size>", arg0, (object)text);
		return pSVar1;
	}

	[Token(Token = "0x60056E7")]
	[Address(RVA = "0x5CF2630", Offset = "0x5CF1630", VA = "0x5CF2630")]
	public static string RichTextTag(string text, string tag, string value)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$RichTextTag): clean
		String[] values;
		String pSVar1;

		values = (String[])new string[9];
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = "<";
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = tag;
				if (2 < (uint)values.Length) {
					values[2] = "=";
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = value;
						if (4 < (uint)values.Length) {
							values[4] = ">";
							if (5 < (uint)values.Length) {
								values[5] = text;
								if (6 < (uint)values.Length) {
									values[6] = "</";
									if ((values.Length & 0xfffffff8) != 0) {
										values[7] = tag;
										if (8 < (uint)values.Length) {
											values[8] = ">";
											return pSVar1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60056E8")]
	[Address(RVA = "0x5CF27D0", Offset = "0x5CF17D0", VA = "0x5CF27D0")]
	public static Quaternion ConstrainedToX(Quaternion rotation)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$ConstrainedToX): clean
		Vector3 UVar1;
		Vector3 euler;
		Quaternion UVar2;
		Vector3 UStack_20;
		Quaternion UStack_10;

		UStack_10 = rotation;
		UVar1 = Quaternion.Internal_ToEulerRad(ref UStack_10);
		euler.x = UVar1.x * 57.29578;
		euler.y = UVar1.y * 57.29578;
		euler.z = UVar1.z * 57.29578;
		UVar1 = Quaternion.Internal_MakePositive(euler);
		UStack_20.x = UVar1.x * 0.017453292;
		UStack_20.y = 0.0;
		UStack_20.z = 0.0;
		UVar2 = (Quaternion)Quaternion.Internal_FromEulerRad(ref UStack_20);
		return (Quaternion)UVar2;
	}

	[Token(Token = "0x60056E9")]
	[Address(RVA = "0x5CF2830", Offset = "0x5CF1830", VA = "0x5CF2830")]
	public static Quaternion ConstrainedToY(Quaternion rotation)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$ConstrainedToY): clean
		Vector3 UVar1;
		Vector3 euler;
		Quaternion UVar2;
		Vector3 local_20;
		Quaternion local_10;

		local_10 = rotation;
		UVar1 = Quaternion.Internal_ToEulerRad(ref local_10);
		euler.x = UVar1.x * 57.29578;
		euler.y = UVar1.y * 57.29578;
		euler.z = UVar1.z * 57.29578;
		UVar1 = Quaternion.Internal_MakePositive(euler);
		local_20.x = 0.0;
		local_20.y = UVar1.y * 0.017453292;
		local_20.z = 0.0;
		UVar2 = (Quaternion)Quaternion.Internal_FromEulerRad(ref local_20);
		return (Quaternion)UVar2;
	}

	[Token(Token = "0x60056EA")]
	[Address(RVA = "0x5CF28A0", Offset = "0x5CF18A0", VA = "0x5CF28A0")]
	public static Quaternion ConstrainedToZ(Quaternion rotation)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$ConstrainedToZ): clean
		Quaternion UVar1;
		Vector3 UVar2;
		Vector3 euler;
		Vector3 local_20;
		Quaternion local_10;

		local_10 = rotation;
		UVar2 = Quaternion.Internal_ToEulerRad(ref local_10);
		euler.x = UVar2.x * 57.29578;
		euler.y = UVar2.y * 57.29578;
		euler.z = UVar2.z * 57.29578;
		UVar2 = Quaternion.Internal_MakePositive(euler);
		local_20.x = 0.0;
		local_20.y = 0.0;
		local_20.z = UVar2.z * 0.017453292;
		UVar1 = (Quaternion)Quaternion.Internal_FromEulerRad(ref local_20);
		return (Quaternion)UVar1;
	}

	[Token(Token = "0x60056EB")]
	[Address(RVA = "0x5CF2900", Offset = "0x5CF1900", VA = "0x5CF2900")]
	public static List<int> GetAllTitanAgentIds()
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$GetAllTitanAgentIds): 10 lines keep C-only constructs
		List<KeyValuePair<float, string>> source;
		object pIVar1;
		Func<T, TResult> __this;
		System_Collections_Generic_IEnumerable_TResult__o pSVar2;
		Func<Nullable<int>, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		Utility_Util___c_StaticFields pUVar3;
		Func<Nullable<int>, int> __this_01;
		System_Collections_Generic_List_TSource__o pSVar4;

		source = Util._agentSizes;
		if ((typeof(Util.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar3 = typeof(Util.c).static_fields;
			__this = (Func<T, TResult>)pUVar3.__9__41_0;
		}
		else {
			pUVar3 = typeof(Util.c).static_fields;
			__this = (Func<T, TResult>)pUVar3.__9__41_0;
		}
		if (__this == null) {
			if (((typeof(Util.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(Util.c).static_fields;
			}
			pIVar1 = (object)pUVar3.__9;
			__this = new Func<KeyValuePair<float, string>, Nullable<int>>(pIVar1, (intptr_t)MethodInfo_Utility_Util_c_GetAllTitanAgentIds_b__41_0);
			pUVar3 = typeof(Util.c).static_fields;
			pUVar3.__9__41_0 = (Func<KeyValuePair<float, string>, Nullable<int>>)__this;
		}
		pSVar2 = Enumerable.Select<KeyValuePair<float, string>, Nullable<int>>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this);
		if ((typeof(Util.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar3 = typeof(Util.c).static_fields;
			__this_00 = pUVar3.__9__41_1;
		}
		else {
			pUVar3 = typeof(Util.c).static_fields;
			__this_00 = pUVar3.__9__41_1;
		}
		if (__this_00 == null) {
			if (((typeof(Util.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(Util.c).static_fields;
			}
			pIVar1 = (object)pUVar3.__9;
			__this_00 = new Func<Nullable<int>, bool>(pIVar1, (intptr_t)MethodInfo_Utility_Util_c_GetAllTitanAgentIds_b__41_1);
			pUVar3 = typeof(Util.c).static_fields;
			pUVar3.__9__41_1 = __this_00;
		}
		source_00 = Enumerable.Where<Nullable<int>>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2, (System_Func_TSource__bool__o)__this_00);
		if ((typeof(Util.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar3 = typeof(Util.c).static_fields;
			__this_01 = pUVar3.__9__41_2;
		}
		else {
			pUVar3 = typeof(Util.c).static_fields;
			__this_01 = pUVar3.__9__41_2;
		}
		if (__this_01 == null) {
			if (((typeof(Util.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(Util.c).static_fields;
			}
			pIVar1 = (object)pUVar3.__9;
			__this_01 = new Func<Nullable<int>, int>(pIVar1, (intptr_t)MethodInfo_Utility_Util_c_GetAllTitanAgentIds_b__41_2);
			pUVar3 = typeof(Util.c).static_fields;
			pUVar3.__9__41_2 = __this_01;
		}
		pSVar2 = Enumerable.Select<Nullable<int>, int>(source_00, (System_Func_TSource__TResult__o)__this_01);
		pSVar4 = Enumerable.ToList<int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2);
		return (List<int>)pSVar4;
	}

	[Token(Token = "0x60056EC")]
	[Address(RVA = "0x5CF2C10", Offset = "0x5CF1C10", VA = "0x5CF2C10")]
	private static KeyValuePair<float, string> GetAgentSizeBucket(float size)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$GetAgentSizeBucket): 9 lines keep C-only constructs
		List<KeyValuePair<float, string>> pSVar1;
		bool bVar2;
		String pSVar3;
		System_Collections_Generic_KeyValuePair_float__object__o SVar4;
		System_Collections_Generic_KeyValuePair_float__string__o SVar5;
		float local_50;
		byte[] local_38 = new byte[16];
		object local_28;
		String pSStack_20;

		local_28 = null;
		pSStack_20 = null;
		local_38._0_8_ = null;
		local_38._8_4_ = 0;
		local_38._12_4_ = 0;
		pSVar1 = Util._agentSizes;
		if (pSVar1 != null) {
			SVar4 = pSVar1.get_Item(0);
			local_50 = SVar4.key;
			pSVar1 = Util._agentSizes;
			if (pSVar1 != null) {
				local_38.GetEnumerator((List<T>)pSVar1);
				pSVar3 = (String)SVar4.value;
				while(true) {
					bVar2 = local_38.MoveNext();
					if (!bVar2) break;
					if (local_28._0_4_ <= size) {
						local_50 = local_28._0_4_;
						pSVar3 = pSStack_20;
					}
				}
				local_38.Dispose();
				SVar5._4_4_ = 0;
				SVar5.key = local_50;
				SVar5.value = pSVar3;
				return (System_Collections_Generic_KeyValuePair_float__string__o)SVar5;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60056ED")]
	[Address(RVA = "0x5CF2DE0", Offset = "0x5CF1DE0", VA = "0x5CF2DE0")]
	public static NavMeshBuildSettings GetAgentSettings(float size, out float bucketSize)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$GetAgentSettings): 2 lines keep C-only constructs
		int agentTypeID;
		System_Collections_Generic_KeyValuePair_float__string__o SVar1;
		Nullable<int> local_58;
		NavMeshBuildSettings local_50;

		SVar1 = Util.GetAgentSizeBucket(size);
		*bucketSize = SVar1.key;
		local_58 = Util.GetNavMeshAgentID(SVar1.value);
		agentTypeID = local_58.Value;
		local_50 = NavMesh.GetSettingsByID(agentTypeID);
		__return_storage_ptr__.m_BuildHeightMesh = local_50.m_BuildHeightMesh;
		__return_storage_ptr__.m_MaxJobWorkers = local_50.m_MaxJobWorkers;
		__return_storage_ptr__.m_PreserveTilesOutsideBounds = local_50.m_PreserveTilesOutsideBounds;
		__return_storage_ptr__.m_Debug =(NavMeshBuildDebugSettings)local_50.m_Debug.m_Flags;
		*(undefined3)&__return_storage_ptr__.field_0x3d = local_50._61_3_;
		__return_storage_ptr__.m_OverrideVoxelSize = local_50.m_OverrideVoxelSize;
		__return_storage_ptr__.m_VoxelSize = local_50.m_VoxelSize;
		__return_storage_ptr__.m_OverrideTileSize = local_50.m_OverrideTileSize;
		__return_storage_ptr__.m_TileSize = local_50.m_TileSize;
		__return_storage_ptr__.m_AgentClimb = local_50.m_AgentClimb;
		__return_storage_ptr__.m_LedgeDropHeight = local_50.m_LedgeDropHeight;
		__return_storage_ptr__.m_MaxJumpAcrossDistance = local_50.m_MaxJumpAcrossDistance;
		__return_storage_ptr__.m_MinRegionArea = local_50.m_MinRegionArea;
		__return_storage_ptr__.m_AgentTypeID = local_50.m_AgentTypeID;
		__return_storage_ptr__.m_AgentRadius = local_50.m_AgentRadius;
		__return_storage_ptr__.m_AgentHeight = local_50.m_AgentHeight;
		__return_storage_ptr__.m_AgentSlope = local_50.m_AgentSlope;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x60056EE")]
	[Address(RVA = "0x5CF2FF0", Offset = "0x5CF1FF0", VA = "0x5CF2FF0")]
	public static float GetAgentSize(CapsuleCollider collider)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$GetAgentSize): 29 lines keep C-only constructs
		List<KeyValuePair<float, string>> __this;
		byte[] auVar1 = new byte[16];
		int agentTypeID;
		Transform __this_00;
		float fVar2;
		float extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		float extraout_XMM0_Db_01;
		uint extraout_XMM0_Db_02;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		byte[] auVar3 = new byte[16];
		byte[] auVar4 = new byte[16];
		Vector3 UVar5;
		System_Collections_Generic_KeyValuePair_float__object__o SVar6;
		Nullable<int> local_e0;
		float local_d8;
		float fStack_d4;
		float local_c8;
		uint uStack_c4;
		float local_b8;
		float fStack_b4;
		byte[] local_a8 = new byte[8];
		float fStack_a0;
		float fStack_9c;
		NavMeshBuildSettings local_98;
		NavMeshBuildSettings local_50;

		if (collider != null) {
			__this_00 = collider.transform;
			if (__this_00 != null) {
				UVar5 = __this_00.lossyScale;
				fStack_a0 = (float)extraout_XMM0_Dc;
				local_a8 = UVar5._0_8_;
				fStack_9c = (float)extraout_XMM0_Dd;
				__this = Util._agentSizes;
				if (__this != null) {
					SVar6 = __this.get_Item(0);
					local_e0 = Util.GetNavMeshAgentID((String)SVar6.value);
					agentTypeID = local_e0.Value;
					local_50 = NavMesh.GetSettingsByID(agentTypeID);
					local_98.m_BuildHeightMesh = local_50.m_BuildHeightMesh;
					local_98.m_MaxJobWorkers = local_50.m_MaxJobWorkers;
					local_98.m_PreserveTilesOutsideBounds = local_50.m_PreserveTilesOutsideBounds;
					local_98.m_Debug.m_Flags = local_50.m_Debug.m_Flags;
					local_98._61_3_ = local_50._61_3_;
					local_98.m_OverrideVoxelSize = local_50.m_OverrideVoxelSize;
					local_98.m_VoxelSize = local_50.m_VoxelSize;
					local_98.m_OverrideTileSize = local_50.m_OverrideTileSize;
					local_98.m_TileSize = local_50.m_TileSize;
					local_98.m_AgentClimb = local_50.m_AgentClimb;
					local_98.m_LedgeDropHeight = local_50.m_LedgeDropHeight;
					local_98.m_MaxJumpAcrossDistance = local_50.m_MaxJumpAcrossDistance;
					local_98.m_MinRegionArea = local_50.m_MinRegionArea;
					local_98.m_AgentTypeID = local_50.m_AgentTypeID;
					local_98.m_AgentRadius = local_50.m_AgentRadius;
					local_98.m_AgentHeight = local_50.m_AgentHeight;
					local_98.m_AgentSlope = local_50.m_AgentSlope;
					local_b8 = collider.radius;
					fStack_b4 = extraout_XMM0_Db;
					local_c8 = local_98.agentRadius;
					uStack_c4 = extraout_XMM0_Db_00;
					local_d8 = collider.height;
					fStack_d4 = extraout_XMM0_Db_01;
					fVar2 = local_98.agentHeight;
					auVar3._0_4_ = (float)local_a8._0_4_ * local_b8;
					auVar3._4_4_ = (float)local_a8._4_4_ * local_d8;
					auVar3._8_4_ = fStack_a0 * fStack_b4;
					auVar3._12_4_ = fStack_9c * fStack_d4;
					auVar1._4_4_ = fVar2;
					auVar1._0_4_ = local_c8;
					auVar1._8_4_ = uStack_c4;
					auVar1._12_4_ = extraout_XMM0_Db_02;
					auVar4 = divps(auVar3, auVar1);
					if (auVar4._0_4_ <= auVar4._4_4_) {
						auVar4._0_4_ = auVar4._4_4_;
					}
					return auVar4._0_4_ * SVar6.key;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60056EF")]
	[Address(RVA = "0x5CF2ED0", Offset = "0x5CF1ED0", VA = "0x5CF2ED0")]
	public static int? GetNavMeshAgentID(string name)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$GetNavMeshAgentID): 4 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		String b;
		Nullable<int> SVar3;
		int index;
		Nullable<int> local_b0;
		NavMeshBuildSettings local_a8;
		NavMeshBuildSettings local_60;

		local_a8.m_BuildHeightMesh = 0;
		local_a8.m_MaxJobWorkers = 0;
		local_a8.m_PreserveTilesOutsideBounds = 0;
		local_a8.m_Debug.m_Flags = (NavMeshBuildDebugSettings)0x0;
		local_a8._61_3_ = 0;
		local_a8.m_OverrideVoxelSize = 0;
		local_a8.m_VoxelSize = 0.0;
		local_a8.m_OverrideTileSize = 0;
		local_a8.m_TileSize = 0;
		local_a8.m_AgentClimb = 0.0;
		local_a8.m_LedgeDropHeight = 0.0;
		local_a8.m_MaxJumpAcrossDistance = 0.0;
		local_a8.m_MinRegionArea = 0.0;
		local_a8.m_AgentTypeID = 0;
		local_a8.m_AgentRadius = 0.0;
		local_a8.m_AgentHeight = 0.0;
		local_a8.m_AgentSlope = 0.0;
		index = 0;
		iVar2 = NavMesh.GetSettingsCount();
		if (0 < iVar2) {
			do {
				local_60 = NavMesh.GetSettingsByIndex(index);
				local_a8.m_BuildHeightMesh = local_60.m_BuildHeightMesh;
				local_a8.m_MaxJobWorkers = local_60.m_MaxJobWorkers;
				local_a8.m_PreserveTilesOutsideBounds = local_60.m_PreserveTilesOutsideBounds;
				local_a8.m_Debug.m_Flags = local_60.m_Debug.m_Flags;
				local_a8._61_3_ = local_60._61_3_;
				local_a8.m_OverrideVoxelSize = local_60.m_OverrideVoxelSize;
				local_a8.m_VoxelSize = local_60.m_VoxelSize;
				local_a8.m_OverrideTileSize = local_60.m_OverrideTileSize;
				local_a8.m_TileSize = local_60.m_TileSize;
				local_a8.m_AgentClimb = local_60.m_AgentClimb;
				local_a8.m_LedgeDropHeight = local_60.m_LedgeDropHeight;
				local_a8.m_MaxJumpAcrossDistance = local_60.m_MaxJumpAcrossDistance;
				local_a8.m_MinRegionArea = local_60.m_MinRegionArea;
				local_a8.m_AgentTypeID = local_60.m_AgentTypeID;
				local_a8.m_AgentRadius = local_60.m_AgentRadius;
				local_a8.m_AgentHeight = local_60.m_AgentHeight;
				local_a8.m_AgentSlope = local_60.m_AgentSlope;
				iVar2 = local_a8.agentTypeID;
				b = NavMesh.GetSettingsNameFromID(iVar2);
				bVar1 = (name == b);
				if (bVar1) {
					iVar2 = local_a8.agentTypeID;
					local_b0.hasValue = false;
					local_b0._1_3_ = 0;
					local_b0.value = 0;
					local_b0 = new Nullable<int>(iVar2);
					return (Nullable<int>)local_b0;
				}
				index = index + 1;
				iVar2 = NavMesh.GetSettingsCount();
			} while (index < iVar2);
		}
		SVar3.hasValue = false;
		SVar3._1_3_ = 0;
		SVar3.value = 0;
		return (Nullable<int>)SVar3;
	}

	[Token(Token = "0x60056F0")]
	[Address(RVA = "0x5CF31A0", Offset = "0x5CF21A0", VA = "0x5CF31A0")]
	public static Vector3 Abs(Vector3 v)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$Abs): 1 lines keep C-only constructs
		Vector3 UVar1;

		UVar1._0_8_ = v._0_8_ & 0x7fffffff7fffffff;
		UVar1.z = ABS(v.z);
		return (Vector3)UVar1;
	}

	[Token(Token = "0x60056F1")]
	[Address(RVA = "0x5CF31B0", Offset = "0x5CF21B0", VA = "0x5CF31B0")]
	public static Bounds TransformBounds(Bounds bounds, Matrix4x4 matrix)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$TransformBounds): clean
		float fVar1;
		float fVar2;
		float fVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		UnityEngine_Vector3_StaticFields pUVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float local_68;
		float fStack_64;
		float local_58;
		float fStack_54;
		float local_48;
		float fStack_44;

		pUVar10 = typeof(Vector3).static_fields;
		uVar4 = (pUVar10.rightVector).x;
		uVar7 = (pUVar10.rightVector).y;
		fVar1 = (pUVar10.rightVector).z;
		pUVar10 = typeof(Vector3).static_fields;
		uVar5 = (pUVar10.upVector).x;
		uVar8 = (pUVar10.upVector).y;
		fVar2 = (pUVar10.upVector).z;
		if (Il2CppMethodInitialized_0753e72e == false) {
			Il2CppMethodInitialized_0753e72e = true;
			pUVar10 = typeof(Vector3).static_fields;
		}
		uVar6 = (pUVar10.forwardVector).x;
		uVar9 = (pUVar10.forwardVector).y;
		fVar3 = (pUVar10.forwardVector).z;
		local_68 = matrix.m10;
		fStack_64 = matrix.m20;
		fVar13 = bounds.m_Extents.x + bounds.m_Extents.x;
		fVar14 = bounds.m_Extents.y + bounds.m_Extents.y;
		fVar11 = bounds.m_Center.x;
		fVar12 = bounds.m_Center.y;
		local_58 = matrix.m11;
		fStack_54 = matrix.m21;
		fVar15 = bounds.m_Extents.z + bounds.m_Extents.z;
		local_48 = matrix.m12;
		fStack_44 = matrix.m22;
		__return_storage_ptr__.m_Center.x = matrix.m03 + bounds.m_Center.z * matrix.m02 + fVar12 * matrix.m01 + fVar11 * matrix.m00;
		__return_storage_ptr__.m_Center.y = matrix.m13 + bounds.m_Center.z * local_48 + fVar12 * local_58 + fVar11 * local_68;
		__return_storage_ptr__.m_Center.z = matrix.m23 + bounds.m_Center.z * fStack_44 + fVar12 * fStack_54 + fVar11 * fStack_64;
		__return_storage_ptr__.m_Extents.x =(ABS(matrix.m02 * fVar3 + matrix.m01 * (float)uVar9 + matrix.m00 * (float)uVar6) * fVar15 + ABS(fVar2 * matrix.m02 +(float)uVar8 * matrix.m01 + matrix.m00 * (float)uVar5) * fVar14 + fVar13 * ABS(fVar1 * matrix.m02 +(float)uVar7 * matrix.m01 + (float)uVar4 * matrix.m00)) * 0.5;
		__return_storage_ptr__.m_Extents.y =(fVar15 * ABS(fVar3 * local_48 + (float)uVar9 * local_58 + (float)uVar6 * local_68) + ABS((float)uVar8 * local_58 + (float)uVar5 * local_68 + fVar2 * local_48) * fVar14 + ABS((float)uVar7 * local_58 + (float)uVar4 * local_68 + fVar1 * local_48) * fVar13) * 0.5;
		__return_storage_ptr__.m_Extents.z =(fVar15 * ABS(fVar3 * fStack_44 + (float)uVar9 * fStack_54 + (float)uVar6 * fStack_64) + ABS((float)uVar7 * fStack_54 + (float)uVar4 * fStack_64 + fVar1 * fStack_44) * fVar13 + ABS((float)uVar8 * fStack_54 + (float)uVar5 * fStack_64 + fVar2 * fStack_44) * fVar14) * 0.5;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x60056F2")]
	public static T EnumMax<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x60056F3")]
	public static int EnumMaxValue<T>()
	{
		return default(int);
	}

	[Token(Token = "0x60056F4")]
	[Address(RVA = "0x5CF3590", Offset = "0x5CF2590", VA = "0x5CF3590")]
	public static bool IsValidFileName(string fileName)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$IsValidFileName): 1 lines keep C-only constructs
		HashSet<object> __this;
		bool bVar1;
		int iVar2;
		Char[] anyOf;
		Char[] anyOf_00;
		String a;
		bool bVar3;

		anyOf = (Char[])new char[0x1a];
		RuntimeHelpers.InitializeArray((Array)anyOf, FieldRva_PrivateImplementationDetails_CFDA27D1AF5335BEE2318E3A995EB958CD65016C9C7899DCB564F8267399B780);
		anyOf_00 = Path.GetInvalidFileNameChars();
		if (fileName == null) goto label_05df3733;
		iVar2 = fileName.IndexOfAny(anyOf_00);
		if (iVar2 != -1) {
			return false;
		}
		iVar2 = fileName.IndexOfAny(anyOf);
		if (iVar2 != -1) {
			return false;
		}
		if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_0754830a == false) goto label_05df36e8;
	label_05df3673: ;
			if ((typeof(Util)._2).cctor_finished_or_no_cctor != 0) goto label_05df3683;
	label_05df3717: ;
			__this = (HashSet<object>)Util.ReservedFileNames;
		}
		else {
			if (Il2CppMethodInitialized_0754830a != false) goto label_05df3673;
	label_05df36e8: ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754830a = true;
			if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) goto label_05df3717;
	label_05df3683: ;
			__this = (HashSet<object>)Util.ReservedFileNames;
		}
		if (__this != null) {
			bVar1 = __this.Contains((object)fileName);
			if (!bVar1) {
				a = fileName.Trim();
				bVar1 = (a == fileName);
				if (bVar1) {
					bVar3 = fileName._stringLength < 0x32;
				}
			}
			return bVar3;
		}
	label_05df3733: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60056F5")]
	[Address(RVA = "0x5CF3740", Offset = "0x5CF2740", VA = "0x5CF3740")]
	public static bool IsReservedFileName(string fileName)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$IsReservedFileName): 1 lines keep C-only constructs
		uint uVar1;
		HashSet<object> __this;
		bool bVar2;

		if (Il2CppMethodInitialized_0754830a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754830a = true;
			uVar1 = (typeof(Util)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Util)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (HashSet<object>)Util.ReservedFileNames;
		}
		else {
			__this = *(HashSet<object>*)((long)(typeof(Util)).static_fields + 8);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar2 = __this.Contains((object)fileName);
		return bVar2;
	}

	[Token(Token = "0x60056F6")]
	[Address(RVA = "0x5CEE0E0", Offset = "0x5CED0E0", VA = "0x5CEE0E0")]
	public static bool IsFileAccessError(Exception e)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$IsFileAccessError): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		Exception pSVar3;

		if (e != null) {
			pSVar3 = e.klass;
			bVar1 = (pSVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(IOException)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(IOException))) {
				return true;
			}
			bVar2 = (typeof(UnauthorizedAccessException)._2).typeHierarchyDepth;
			if (bVar2 <= bVar1) {
				return (pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(UnauthorizedAccessException);
			}
		}
		return false;
	}

	[Token(Token = "0x60056F7")]
	[Address(RVA = "0x5CF37E0", Offset = "0x5CF27E0", VA = "0x5CF37E0")]
	public static double GetPhotonTimestampDifference(double sentTime, double serverTime)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$GetPhotonTimestampDifference): clean
		return (double)(~-(ulong)(serverTime < sentTime) & (ulong)-sentTime |(ulong)(4294967.295 - sentTime) & -(ulong)(serverTime < sentTime)) + serverTime;
	}

	[Token(Token = "0x60056F8")]
	[Address(RVA = "0x5CF3810", Offset = "0x5CF2810", VA = "0x5CF3810")]
	private static bool ForceScalableParticleSystemMinMaxCurveMode(ParticleSystem.MinMaxCurve curve, out ParticleSystem.MinMaxCurve newCurve, float scale = 1f)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$ForceScalableParticleSystemMinMaxCurveMode): clean
		int iVar1;
		AnimationCurve curve_00;
		float valueEnd;
		float local_40;
		ParticleSystem.MinMaxCurve local_38;

		iVar1 = curve.mode;
		if (iVar1 == 3) {
			local_40 = curve.constantMin;
			valueEnd = curve.constantMax;
		}
		else {
			if (iVar1 != 0) {
				newCurve.m_CurveMax = curve.m_CurveMax;
				newCurve.m_ConstantMin = curve.m_ConstantMin;
				newCurve.m_ConstantMax = curve.m_ConstantMax;
				newCurve.m_Mode = curve.m_Mode;
				newCurve.m_CurveMultiplier = curve.m_CurveMultiplier;
				newCurve.m_CurveMin = curve.m_CurveMin;
				return false;
			}
			local_40 = curve.constant;
			valueEnd = curve.constant;
		}
		curve_00 = AnimationCurve.Linear(0.0, local_40, 1.0, valueEnd);
		local_38.m_CurveMax = null;
		local_38.m_ConstantMin = 0.0;
		local_38.m_ConstantMax = 0.0;
		local_38.m_Mode = 0;
		local_38.m_CurveMultiplier = 0.0;
		local_38.m_CurveMin = null;
		local_38 = new ParticleSystem.MinMaxCurve(scale, curve_00);
		newCurve.m_CurveMax = local_38.m_CurveMax;
		newCurve.m_ConstantMin = local_38.m_ConstantMin;
		newCurve.m_ConstantMax = local_38.m_ConstantMax;
		newCurve.m_Mode = local_38.m_Mode;
		newCurve.m_CurveMultiplier = local_38.m_CurveMultiplier;
		newCurve.m_CurveMin = local_38.m_CurveMin;
		return true;
	}

	[Token(Token = "0x60056F9")]
	[Address(RVA = "0x5CF3910", Offset = "0x5CF2910", VA = "0x5CF3910")]
	public static void ScaleParticleStartSize(ParticleSystem.MainModule main, float scale)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$ScaleParticleStartSize): 5 lines keep C-only constructs
		ParticleSystem.MinMaxCurve curve;
		ParticleSystem.MinMaxCurve value;
		bool bVar1;
		MethodInfo method_00;
		ParticleSystem.MainModule local_50;
		Il2CppMethodPointer local_48;
		AnimationCurve pUStack_40;
		AnimationCurve local_38;
		Il2CppClass pIStack_30;
		Il2CppType* local_20;
		_union_13 _Stack_18;
		_union_14 local_10;
		float fStack_8;
		float fStack_4;

		local_50 = (ParticleSystem.MainModule)(ParticleSystem.MainModule)main.m_ParticleSystem;
		local_38 = null;
		pIStack_30 = null;
		local_48 = (Il2CppMethodPointer)0x0;
		pUStack_40 = null;
		method_00 = (MethodInfo)&local_50;
		local_20 = method_00.startSize;
		curve.m_CurveMin = (AnimationCurve)_Stack_18.rgctx_data;
		curve._0_8_ = local_20;
		curve.m_CurveMax = local_10.genericMethod;
		curve.m_ConstantMin = fStack_8;
		curve.m_ConstantMax = fStack_4;
		bVar1 = Util.ForceScalableParticleSystemMinMaxCurveMode(curve, ref local_48, scale);
		if (bVar1) {
			value.m_CurveMin = pUStack_40;
			value._0_8_ = local_48;
			value.m_CurveMax = local_38;
			value._24_8_ = pIStack_30;
			local_50.startSize = value;
			return;
		}
		local_50.startSizeMultiplier = scale;
		return;
	}

	[Token(Token = "0x60056FA")]
	[Address(RVA = "0x5CF39E0", Offset = "0x5CF29E0", VA = "0x5CF39E0")]
	public static void ScaleParticleStartSpeed(ParticleSystem.MainModule main, float scale)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$ScaleParticleStartSpeed): 5 lines keep C-only constructs
		ParticleSystem.MinMaxCurve curve;
		ParticleSystem.MinMaxCurve value;
		bool bVar1;
		MethodInfo method_00;
		ParticleSystem.MainModule local_50;
		Il2CppMethodPointer local_48;
		AnimationCurve pUStack_40;
		AnimationCurve local_38;
		Il2CppClass pIStack_30;
		Il2CppType* local_20;
		_union_13 _Stack_18;
		_union_14 local_10;
		float fStack_8;
		float fStack_4;

		local_50 = (ParticleSystem.MainModule)(ParticleSystem.MainModule)main.m_ParticleSystem;
		local_38 = null;
		pIStack_30 = null;
		local_48 = (Il2CppMethodPointer)0x0;
		pUStack_40 = null;
		method_00 = (MethodInfo)&local_50;
		local_20 = method_00.startSpeed;
		curve.m_CurveMin = (AnimationCurve)_Stack_18.rgctx_data;
		curve._0_8_ = local_20;
		curve.m_CurveMax = local_10.genericMethod;
		curve.m_ConstantMin = fStack_8;
		curve.m_ConstantMax = fStack_4;
		bVar1 = Util.ForceScalableParticleSystemMinMaxCurveMode(curve, ref local_48, scale);
		if (bVar1) {
			value.m_CurveMin = pUStack_40;
			value._0_8_ = local_48;
			value.m_CurveMax = local_38;
			value._24_8_ = pIStack_30;
			local_50.startSpeed = value;
			return;
		}
		local_50.startSpeedMultiplier = scale;
		return;
	}

	[Token(Token = "0x60056FB")]
	[Address(RVA = "0x5CF3AB0", Offset = "0x5CF2AB0", VA = "0x5CF3AB0")]
	public static bool IsValidResourcePath(string path)
	{
		// Lifted from source/cpp/Utility/Util.c (Utility.Util$$IsValidResourcePath): clean
		uint uVar1;
		String fileName;
		bool bVar2;
		String[] pSVar3;
		ulong uVar4;
		ulong uVar5;

		bVar2 = String.IsNullOrEmpty(path);
		if (bVar2) {
			return false;
		}
		if (path != null) {
			pSVar3 = path.Split(0x2f, 0);
			if (pSVar3 != null) {
				if ((int)pSVar3.Length < 1) {
					return true;
				}
				uVar4 = pSVar3.Length & 0xffffffff;
				uVar5 = 0;
				while(true) {
					if (uVar4 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					fileName = pSVar3[uVar5];
					bVar2 = Util.IsValidFileName(fileName);
					if (!bVar2) break;
					uVar5 = uVar5 + 1;
					uVar1 = (uint)pSVar3.Length;
					uVar4 = (ulong)uVar1;
					if ((long)(int)uVar1 <= (long)uVar5) {
						return bVar2;
					}
				}
				return bVar2;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/Util.c.

	// Utility.Util$$CreateDontDestroyObj<object>: 1 lines keep C-only constructs
	private static object CreateDontDestroyObj_object()
	{
		Object __this;
		object pIVar1;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		__this = new GameObject();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.name = "Dont Destroy";
		Object.DontDestroyOnLoad(__this);
		pIVar1 = __this.AddComponent<object>();
		return pIVar1;
	}

	// Utility.Util$$CreateObj<object>: 1 lines keep C-only constructs
	private static object CreateObj_object()
	{
		GameObject __this;
		object pIVar1;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		__this = new GameObject();
		if (__this == null) {
			throw new NullReferenceException();
		}
		pIVar1 = __this.AddComponent<object>();
		return pIVar1;
	}

	// Utility.Util$$EnumMax<__Il2CppFullySharedGenericType>: 18 lines keep C-only constructs
	private static __Il2CppFullySharedGenericType EnumMax___Il2CppFullySharedGenericType()
	{
		uint uVar1;
		RuntimeTypeHandle handle;
		Il2CppMethodPointer pIVar2;
		ulong puVar3;
		ulong uVar4;
		code *pcVar5;
		long lVar6;
		MethodInfo_377BF40 __dest;
		Il2CppRGCTXData pIVar7;
		Type enumType;
		Array pSVar8;
		IntPtr extraout_RDX;
		byte __src;
		byte puVar9;
		MethodInfo in_RSI;
		__Il2CppFullySharedGenericType UVar10;
		ulong uStack_50;
		ulong local_48;
		MethodInfo_377BF40 local_38;

		pIVar7 = (in_RSI.field7_0x38).rgctx_data;
		local_38 = method;
		if (pIVar7 == null) {
			uStack_50 = 0x387bf69;
			il2cpp_codegen_rgctx_method_init(in_RSI);
			pIVar7 = (in_RSI.field7_0x38).rgctx_data;
		}
		uVar1 = *(uint)((long)pIVar7[4].klass + 0xfc);
		lVar6 = -((ulong)uVar1 + 0xf & 0xfffffffffffffff0);
		__src = (byte)((long)&local_48 + lVar6);
		handle.value = (RuntimeTypeHandle)pIVar7.rgctxDataDummy;
		puVar9 = __src;
		if ((g_data_075567a8._2).cctor_finished_or_no_cctor == 0) {
			*(ulong)((long)&uStack_50 + lVar6) = 0x387bfa9;
			puVar9 = (byte)((long)&local_48 + lVar6);
		}
		*(ulong)(puVar9 + -8) = 0x387bfb3;
		enumType = Type.GetTypeFromHandle(handle);
		if ((g_data_07556760._2).cctor_finished_or_no_cctor == 0) {
			*(ulong)(puVar9 + -8) = 0x387bfcb;
		}
		*(ulong)(puVar9 + -8) = 0x387bfd5;
		pSVar8 = Enum.GetValues(enumType);
		pIVar2 = ((in_RSI.field7_0x38).rgctx_data[1].method).methodPointer;
		*(ulong)(puVar9 + -8) = 0x387bfe3;
		local_48 = (*pIVar2)(pSVar8);
		puVar3 = *(ulong*)((long)(in_RSI.field7_0x38).methodMetadataHandle + 0x18);
		uVar4 = *puVar3;
		pcVar5 = (code)puVar3[2];
		*(ulong)(puVar9 + -8) = 0x387c003;
		(*pcVar5)(uVar4,puVar3,0,&local_48,__src);
		__dest = local_38;
		*(ulong)(puVar9 + -8) = 0x387c012;
		UVar10.klass = memcpy(__dest, __src, (ulong)uVar1);
		UVar10.monitor = extraout_RDX;
		return UVar10;
	}

	// Utility.Util$$EnumMaxValue<Int32Enum>: 3 lines keep C-only constructs
	private static int EnumMaxValue_Int32Enum()
	{
		RuntimeTypeHandle handle;
		int iVar1;
		MethodInfo_377C030_RGCTXs pMVar2;
		Type enumType;
		IEnumerable source;
		System_Collections_Generic_IEnumerable_TResult__o source_00;

		pMVar2 = method.rgctx_data;
		if (pMVar2 == null) {
			pMVar2 = method.rgctx_data;
			if (pMVar2 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar2 = method.rgctx_data;
			}
		}
		handle.value = (RuntimeTypeHandle)pMVar2._0_T;
		enumType = Type.GetTypeFromHandle(handle);
		source = (IEnumerable)Enum.GetValues(enumType);
		source_00 = Enumerable.Cast<int>(source);
		iVar1 = Enumerable.Max((IEnumerable<int>)source_00);
		return iVar1;
	}

	// Utility.Util$$EnumMaxValue<__Il2CppFullySharedGenericType>: 3 lines keep C-only constructs
	private static int EnumMaxValue___Il2CppFullySharedGenericType()
	{
		RuntimeTypeHandle handle;
		int iVar1;
		MethodInfo_377C0D0_RGCTXs pMVar2;
		Type enumType;
		IEnumerable source;
		System_Collections_Generic_IEnumerable_TResult__o source_00;

		pMVar2 = method.rgctx_data;
		if (pMVar2 == null) {
			pMVar2 = method.rgctx_data;
			if (pMVar2 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar2 = method.rgctx_data;
			}
		}
		handle.value = (RuntimeTypeHandle)pMVar2._0_T;
		enumType = Type.GetTypeFromHandle(handle);
		source = (IEnumerable)Enum.GetValues(enumType);
		source_00 = Enumerable.Cast<int>(source);
		iVar1 = Enumerable.Max((IEnumerable<int>)source_00);
		return iVar1;
	}

	// Utility.Util$$EnumToDict<Int32Enum>: 16 lines keep C-only constructs
	private static System_Collections_Generic_Dictionary_string__T__o EnumToDict_Int32Enum()
	{
		byte bVar1;
		int value;
		bool bVar3;
		MethodInfo_377C170_RGCTXs pMVar4;
		Il2CppClass pIVar5;
		System_Collections_Generic_Dictionary_string__T__o __this;
		List<T> __this_00;
		String key;
		byte[] local_80 = new byte[24];
		object local_68;
		Enum local_58;
		byte[] local_40 = new byte[16];
		object local_30;

		pMVar4 = method.rgctx_data;
		local_80._0_8_ = method;
		if (pMVar4 == null) {
			pMVar4 = method.rgctx_data;
			if (pMVar4 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pIVar5 = method.rgctx_data._0_System_Collections_Generic_Dictionary_string__T_;
				bVar1 = (pIVar5._2).bitflags1;
				goto joined_r0x0387c1b0;
			}
		}
		pIVar5 = pMVar4._0_System_Collections_Generic_Dictionary_string__T_;
		bVar1 = (pIVar5._2).bitflags1;
	joined_r0x0387c1b0: ;
		if ((bVar1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		__this = (System_Collections_Generic_Dictionary_string__T__o)il2cpp_codegen_object_new(pIVar5);
		__this = new Dictionary<object, Int32Enum>();
		__this_00 = Util.EnumToList<Int32Enum>();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_40.GetEnumerator(__this_00);
		local_68 = local_30;
		local_80._8_8_ = local_40._0_8_;
		local_80._16_8_ = local_40._8_8_;
		local_40._0_8_ = null;
		local_40._8_8_ = local_80 + 8;
		local_30 = (object)local_80;
		if (__this == null) {
			bVar3 = ((local_80 + 8)).MoveNext();
			if (bVar3) {
				pIVar5 = (*(MethodInfo_377C170_RGCTXs*)&(((Il2CppClass_1)local_80._0_8_).this_arg).bits)._8_T;
				if (((pIVar5._2).bitflags1 & 1) == 0) {
					pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
				}
				local_58.monitor = (IntPtr)0xffffffffffffffff;
				local_58.klass = (Enum)pIVar5;
				local_58.ToString();
				throw new NullReferenceException();
			}
		}
		else {
			while (bVar3 = ((local_80 + 8)).MoveNext()) {
				value = (int32_t)local_68;
				pIVar5 = (*(MethodInfo_377C170_RGCTXs*)&(((Il2CppClass_1)local_80._0_8_).this_arg).bits)._8_T;
				if (((pIVar5._2).bitflags1 & 1) == 0) {
					pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
				}
				local_58.monitor = (IntPtr)0xffffffffffffffff;
				local_58.klass = (Enum)pIVar5;
				key = local_58.ToString();
				__this.Add((object)key, value);
			}
		}
		((local_80 + 8)).Dispose();
		return __this;
	}

	// Utility.Util$$EnumToDict<__Il2CppFullySharedGenericType>: 27 lines keep C-only constructs
	private static System_Collections_Generic_Dictionary_string__T__o EnumToDict___Il2CppFullySharedGenericType()
	{
		Il2CppMethodPointer pIVar1;
		MethodInfo pMVar2;
		InvokerMethod pIVar3;
		code *pcVar4;
		long lVar5;
		IntPtr pvVar6;
		MethodInfo_377C3E0_RGCTXs pMVar7;
		sbyte cVar8;
		uint uVar9;
		Il2CppClass pIVar10;
		ulong uVar11;
		IntPtr pvVar12;
		MethodInfo_377C3E0_RGCTXs pMVar13;
		ulong uVar14;
		MethodInfo_377C3E0 pMVar15;
		byte puVar16;
		ulong puVar17;
		IntPtr __src;
		ulong __dest;
		ulong uVar18;
		IntPtr __s;
		IntPtr pvVar19;
		byte[] auStack_b8 = new byte[8];
		IntPtr local_b0;
		MethodInfo_377C3E0* local_a8;
		byte* local_a0;
		IntPtr local_98;
		long local_90;
		ulong local_88;
		byte local_80;
		IntPtr local_78;
		MethodInfo_377C3E0 local_70;
		IntPtr local_68;
		IntPtr local_50;
		ulong local_48;
		MethodInfo_377C3E0_RGCTXs local_40;
		MethodInfo_377C3E0 local_38;

		local_40 = method.rgctx_data;
		local_38 = method;
		if (local_40 == null) {
			local_40 = method.rgctx_data;
			if (local_40 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				local_40 = method.rgctx_data;
			}
		}
		pIVar10 = local_40._5_System_Collections_Generic_List_Enumerator_T_;
		uVar9 = (pIVar10._2).stack_slot_size;
		uVar18 = (ulong)uVar9;
		local_48 = (ulong)(local_40._8_T._2).stack_slot_size;
		if (((pIVar10._2).bitflags1 & 1) == 0) {
			pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			uVar9 = (pIVar10._2).stack_slot_size;
			local_40 = method.rgctx_data;
		}
		lVar5 = -((ulong)(uVar9 + 0x10) + 0xf & 0xfffffffffffffff0);
		puVar16 = auStack_b8 + lVar5;
		pIVar10 = local_40._8_T;
		local_80 = puVar16;
		local_70 = method;
		if (((pIVar10._2).bitflags1 & 1) == 0) {
			*(ulong)(auStack_b8 + lVar5 + -8) = 0x387c48a;
			pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			puVar16 = auStack_b8 + lVar5;
			local_40 = method.rgctx_data;
		}
		local_90 = (long)puVar16 - ((ulong)((pIVar10._2).stack_slot_size + 0x10) + 0xf & 0xfffffffffffffff0);
		uVar14 = local_48 + 0xf & 0xfffffffffffffff0;
		__src = (IntPtr)(local_90 - uVar14);
		__dest = (ulong)((long)__src - uVar14);
		uVar11 = uVar18 + 0xf & 0xfffffffffffffff0;
		local_78 = (IntPtr)((long)__dest - uVar11);
		pvVar19 = (IntPtr)((long)local_78 - uVar11);
		local_88 = uVar18;
		local_50 = pvVar19;
		*(ulong)((long)pvVar19 + -8) = 0x387c50a;
		memset(pvVar19, 0, uVar18);
		uVar18 = local_48;
		__s = (IntPtr)((long)pvVar19 - uVar14);
		*(ulong)((long)__s + -8) = 0x387c521;
		memset(__s, 0, uVar18);
		pIVar10 = local_40._0_System_Collections_Generic_Dictionary_string__T_;
		if (((pIVar10._2).bitflags1 & 1) == 0) {
			*(ulong)((long)__s + -8) = 0x387c536;
			pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
		}
		pMVar15 = local_70;
		*(ulong)((long)__s + -8) = 0x387c542;
		local_40 = (MethodInfo_377C3E0_RGCTXs)il2cpp_codegen_object_new(pIVar10);
		pIVar1 = pMVar15.rgctx_data._1_System_Collections_Generic_Dictionary_string__T___ctor.methodPointer;
		*(ulong)((long)__s + -8) = 0x387c553;
		(*pIVar1)();
		if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
			*(ulong)((long)__s + -8) = 0x387c56b;
		}
		pIVar1 = pMVar15.rgctx_data._2_Utility_Util_EnumToList_T_.methodPointer;
		*(ulong)((long)__s + -8) = 0x387c575;
		pvVar12 = (IntPtr)(*pIVar1)();
		pvVar6 = local_78;
		if (pvVar12 == null) {
			*(ulong)((long)__s + -8) = 0x387c725;
			throw new NullReferenceException();
		}
		pMVar2 = pMVar15.rgctx_data._4_System_Collections_Generic_List_T__GetEnumerator;
		pIVar1 = pMVar2.methodPointer;
		local_b0 = local_78;
		pIVar3 = pMVar2.invoker_method;
		*(ulong)((long)__s + -8) = 0x387c5a1;
		(*pIVar3)(pIVar1,pMVar2,pvVar12,&local_b0,pvVar6);
		pvVar6 = local_78;
		uVar18 = local_88;
		*(ulong)((long)__s + -8) = 0x387c5b1;
		memcpy(pvVar19, pvVar6, uVar18);
		local_b0 = null;
		local_a8 = &local_38;
		local_a0 = &local_80;
		local_98 = &local_50;
		while(true) {
			pcVar4 = ((pMVar15.rgctx_data[1]._0_System_Collections_Generic_Dictionary_string__T_)._1).image;
			*(ulong)((long)__s + -8) = 0x387c5ed;
			cVar8 = (*pcVar4)(pvVar19);
			pMVar7 = local_40;
			pvVar19 = local_50;
			if (cVar8 == false) {
				pMVar13 = local_38.rgctx_data;
				pIVar10 = pMVar13._5_System_Collections_Generic_List_Enumerator_T_;
				if (((pIVar10._2).bitflags1 & 1) == 0) {
					*(ulong)((long)__s + -8) = 0x387c6e2;
					pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
					pMVar13 = local_38.rgctx_data;
				}
				pvVar19 = local_50;
				puVar16 = local_80;
				pMVar2 = pMVar13[1]._1_System_Collections_Generic_Dictionary_string__T___ctor;
				*(ulong)((long)__s + -8) = 0x387c704;
				il2cpp_runtime_helper_030d6e00(pIVar10, pMVar2, puVar16, pvVar19, 0, 0);
				return (System_Collections_Generic_Dictionary_string__T__o)pMVar7;
			}
			pMVar2 = local_38.rgctx_data._6_System_Collections_Generic_List_Enumerator_T__get_Current;
			pIVar1 = pMVar2.methodPointer;
			pIVar3 = pMVar2.invoker_method;
			local_68 = __src;
			*(ulong)((long)__s + -8) = 0x387c61a;
			(*pIVar3)(pIVar1,pMVar2,pvVar19,&local_68,__src);
			uVar18 = local_48;
			*(ulong)((long)__s + -8) = 0x387c629;
			memcpy(__s, __src, uVar18);
			pMVar13 = local_38.rgctx_data;
			pIVar10 = pMVar13._8_T;
			if (((pIVar10._2).bitflags1 & 1) == 0) {
				*(ulong)((long)__s + -8) = 0x387c646;
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				pMVar13 = local_38.rgctx_data;
			}
			lVar5 = local_90;
			pMVar2 = pMVar13._10_System_Collections_Generic_Dictionary_string__T__Add;
			*(ulong)((long)__s + -8) = 0x387c66b;
			il2cpp_runtime_helper_030d6e00(pIVar10, pMVar2, lVar5, __s, 0, &local_68);
			uVar18 = local_48;
			pvVar19 = local_68;
			*(ulong)((long)__s + -8) = 0x387c67e;
			memcpy(__dest, __s, uVar18);
			if (pMVar7 == null) break;
			puVar17 = __dest;
			if (-1 < (int)(local_38.rgctx_data._8_T._1).byval_arg.bits) {
				puVar17 = (ulong)*__dest;
			}
			pMVar2 = local_38.rgctx_data._11_System_Collections_Generic_List_Enumerator_T__MoveNext;
			pIVar1 = pMVar2.methodPointer;
			pIVar3 = pMVar2.invoker_method;
			local_68 = pvVar19;
			*(ulong)((long)__s + -8) = 0x387c6b9;
			(*pIVar3)(pIVar1,pMVar2,pMVar7,&local_68,puVar17);
			pMVar15 = local_38;
			pvVar19 = local_50;
		}
		*(ulong)((long)__s + -8) = 0x387c720;
		throw new NullReferenceException();
	}

	// Utility.Util$$EnumToList<Int32Enum>: 5 lines keep C-only constructs
	private static List<T> EnumToList_Int32Enum()
	{
		RuntimeTypeHandle handle;
		MethodInfo_377C780_RGCTXs pMVar1;
		Type enumType;
		IEnumerable source;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		System_Collections_Generic_List_TSource__o pSVar2;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar1 = method.rgctx_data;
		}
		handle.value = (RuntimeTypeHandle)pMVar1._0_T;
		enumType = Type.GetTypeFromHandle(handle);
		source = (IEnumerable)Enum.GetValues(enumType);
		source_00 = Enumerable.Cast<Int32Enum>(source);
		pSVar2 = Enumerable.ToList<Int32Enum>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		return (List<T>)pSVar2;
	}

	// Utility.Util$$EnumToList<__Il2CppFullySharedGenericType>: 5 lines keep C-only constructs
	private static List<T> EnumToList___Il2CppFullySharedGenericType()
	{
		RuntimeTypeHandle handle;
		MethodInfo pMVar1;
		Il2CppMethodPointer vtableDispatch;
		MethodInfo_377C810_RGCTXs pMVar2;
		Type enumType;
		Array pSVar3;
		List<T> pSVar4;
		byte[] auVar5 = new byte[16];

		pMVar2 = method.rgctx_data;
		if (pMVar2 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar2 = method.rgctx_data;
		}
		handle.value = (RuntimeTypeHandle)pMVar2._0_T;
		enumType = Type.GetTypeFromHandle(handle);
		pSVar3 = Enum.GetValues(enumType);
		auVar5 = (*method.rgctx_data._1_System_Linq_Enumerable_Cast_T_.methodPointer)(pSVar3);
		pMVar1 = method.rgctx_data._3_System_Linq_Enumerable_ToList_T_;
		vtableDispatch = pMVar1.methodPointer;
		pSVar4 = (List<T>)(*vtableDispatch)(auVar5._0_8_,pMVar1,auVar5._8_8_,vtableDispatch);
		return pSVar4;
	}

	// Utility.Util$$EnumToStringArray<Int32Enum>: 2 lines keep C-only constructs
	private static String[] EnumToStringArray_Int32Enum()
	{
		RuntimeTypeHandle handle;
		MethodInfo_377C8A0_RGCTXs pMVar1;
		String[] pSVar2;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar1 = method.rgctx_data;
		}
		handle.value = (RuntimeTypeHandle)pMVar1._0_T;
		return pSVar2;
	}

	// Utility.Util$$EnumToStringArray<__Il2CppFullySharedGenericType>: 2 lines keep C-only constructs
	private static String[] EnumToStringArray___Il2CppFullySharedGenericType()
	{
		RuntimeTypeHandle handle;
		MethodInfo_377C910_RGCTXs pMVar1;
		String[] pSVar2;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar1 = method.rgctx_data;
		}
		handle.value = (RuntimeTypeHandle)pMVar1._0_T;
		return pSVar2;
	}

	// Utility.Util$$EnumToStringArrayExceptNone<Int32Enum>: 5 lines keep C-only constructs
	private static String[] EnumToStringArrayExceptNone_Int32Enum()
	{
		int piVar1;
		uint uVar2;
		MethodInfo pMVar3;
		RuntimeTypeHandle handle;
		String a;
		String[] pSVar4;
		bool bVar5;
		List<string> __this;
		Il2CppRGCTXData pIVar6;
		Type enumType;
		String[] pSVar7;
		ulong uVar8;
		int iVar9;
		ulong uVar10;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		__this = new List<string>();
		pMVar3 = method.rgctx_data._0_Utility_Util_EnumToStringArray_T_;
		pIVar6 = (pMVar3.field7_0x38).rgctx_data;
		if (pIVar6 == null) {
			il2cpp_codegen_rgctx_method_init(pMVar3);
			pIVar6 = (pMVar3.field7_0x38).rgctx_data;
		}
		handle.value = (RuntimeTypeHandle)pIVar6.rgctxDataDummy;
		enumType = Type.GetTypeFromHandle(handle);
		pSVar7 = Enum.GetNames(enumType);
		if (pSVar7 != null) {
			iVar9 = (int)pSVar7.Length;
			uVar8 = pSVar7.Length & 0xffffffff;
			if (__this == null) {
				if (iVar9 < 1) goto label_0387cbc4;
				uVar10 = 0;
				do {
					if (uVar8 <= uVar10) goto label_0387cbbf;
					bVar5 = (pSVar7[uVar10] != "None");
					if (bVar5) goto label_0387cbc4;
					uVar10 = uVar10 + 1;
					uVar2 = (uint)pSVar7.Length;
					uVar8 = (ulong)uVar2;
				} while ((long)uVar10 < (long)(int)uVar2);
			}
			else {
				if (iVar9 < 1) goto label_0387cb9f;
				uVar10 = 0;
				do {
					if (uVar8 <= uVar10) {
	label_0387cbbf: ;
						throw new IndexOutOfRangeException();
					}
					a = pSVar7[uVar10];
					bVar5 = (a != "None");
					pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
					if (bVar5) {
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = __this._items;
						if (pSVar4 == null) goto label_0387cbc4;
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar4.Length) {
							__this._size = uVar2 + 1;
							pSVar4[(int)uVar2] = a;
						}
						else {
							__this.AddWithResize((object)a);
						}
					}
					uVar10 = uVar10 + 1;
					uVar2 = (uint)pSVar7.Length;
					uVar8 = (ulong)uVar2;
				} while ((long)uVar10 < (long)(int)uVar2);
			}
			if (__this != null) {
	label_0387cb9f: ;
				pSVar7 = (String[])__this.ToArray();
				return pSVar7;
			}
		}
	label_0387cbc4: ;
		throw new NullReferenceException();
	}

	// Utility.Util$$EnumToStringArrayExceptNone<__Il2CppFullySharedGenericType>: 4 lines keep C-only constructs
	private static String[] EnumToStringArrayExceptNone___Il2CppFullySharedGenericType()
	{
		int piVar1;
		uint uVar2;
		String a;
		bool bVar4;
		List<string> __this;
		long lVar5;
		ulong uVar6;
		String[] pSVar7;
		int iVar8;
		ulong uVar9;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		__this = new List<string>();
		lVar5 = (*method.rgctx_data._0_Utility_Util_EnumToStringArray_T_.methodPointer)();
		if (lVar5 != 0) {
			iVar8 = (int)*(ulong)(lVar5 + 0x18);
			uVar6 = *(ulong)(lVar5 + 0x18) & 0xffffffff;
			if (__this == null) {
				if (iVar8 < 1) goto label_0387cdb4;
				uVar9 = 0;
				do {
					if (uVar6 <= uVar9) goto label_0387cdaf;
					bVar4 = (*(String*)(lVar5 + 0x20 + uVar9 * 8) != "None");
					if (bVar4) goto label_0387cdb4;
					uVar9 = uVar9 + 1;
					uVar6 = (ulong)*(uint)(lVar5 + 0x18);
				} while ((long)uVar9 < (long)(int)*(uint)(lVar5 + 0x18));
			}
			else {
				if (iVar8 < 1) goto label_0387cd8f;
				uVar9 = 0;
				do {
					if (uVar6 <= uVar9) {
	label_0387cdaf: ;
						throw new IndexOutOfRangeException();
					}
					a = *(String*)(lVar5 + 0x20 + uVar9 * 8);
					bVar4 = (a != "None");
					if (bVar4) {
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar7 = __this._items;
						if (pSVar7 == null) goto label_0387cdb4;
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar7.Length) {
							__this._size = uVar2 + 1;
							pSVar7[(int)uVar2] = a;
						}
						else {
							__this.AddWithResize((object)a);
						}
					}
					uVar9 = uVar9 + 1;
					uVar6 = (ulong)*(uint)(lVar5 + 0x18);
				} while ((long)uVar9 < (long)(int)*(uint)(lVar5 + 0x18));
			}
			if (__this != null) {
	label_0387cd8f: ;
				pSVar7 = (String[])__this.ToArray();
				return pSVar7;
			}
		}
	label_0387cdb4: ;
		throw new NullReferenceException();
	}

	// Utility.Util$$GroupBuckets<object>: 23 lines keep C-only constructs
	private static System_Collections_Generic_List_List_T___o GroupBuckets_object(List<T> items, int buckets)
	{
		int piVar1;
		byte bVar2;
		uint uVar3;
		int iVar4;
		MethodInfo pMVar5;
		List<T>[] pSVar6;
		Object[] pSVar7;
		ulong uVar8;
		object item;
		bool bVar9;
		Il2CppClass pIVar10;
		System_Collections_Generic_List_List_T___o __this;
		List<object> pSVar11;
		int index;
		int iVar12;
		byte[] local_68 = new byte[16];
		System_Collections_Generic_List_Enumerator_object__o pSStack_58;
		object local_50;
		System_Collections_Generic_List_Enumerator_object__o local_48;

		local_68._0_8_ = method;
		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pIVar10 = method.rgctx_data._0_System_Collections_Generic_List_List_T__;
			bVar2 = (pIVar10._2).bitflags1;
		}
		else {
			pIVar10 = method.rgctx_data._0_System_Collections_Generic_List_List_T__;
			bVar2 = (pIVar10._2).bitflags1;
		}
		if ((bVar2 & 1) == 0) {
			pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
		}
		__this = (System_Collections_Generic_List_List_T___o)il2cpp_codegen_object_new(pIVar10);
		__this = new List<object>();
		if (0 < buckets) {
			if (__this == null) {
				pIVar10 = method.rgctx_data._2_System_Collections_Generic_List_T_;
				if (((pIVar10._2).bitflags1 & 1) == 0) {
					pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				}
				pSVar11 = (List<object>)il2cpp_codegen_object_new(pIVar10);
				pSVar11 = new List<object>();
				throw new NullReferenceException();
			}
			iVar12 = buckets;
			do {
				while(true) {
					uVar8 = local_68._0_8_;
					pIVar10 = (*(MethodInfo_377CDC0_RGCTXs*)(local_68._0_8_ + 0x38)). _2_System_Collections_Generic_List_T_;
					if (((pIVar10._2).bitflags1 & 1) == 0) {
						pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
					}
					pSVar11 = (List<object>)il2cpp_codegen_object_new(pIVar10);
					pSVar11 = new List<object>();
					pMVar5 = (*(MethodInfo_377CDC0_RGCTXs*)(uVar8 + 0x38)). _4_System_Collections_Generic_List_List_T___Add;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = __this._items;
					if (pSVar6 == null) goto label_0387d077;
					uVar3 = __this._size;
					if ((uint)pSVar6.Length <= uVar3) break;
					__this._size = uVar3 + 1;
					pSVar6[(int)uVar3] = (List<T>)pSVar11;
					iVar12 = iVar12 + -1;
					if (iVar12 == 0) goto label_0387cec7;
				}
				__this.AddWithResize((object)pSVar11);
				iVar12 = iVar12 + -1;
			} while (iVar12 != 0);
		}
	label_0387cec7: ;
		if (items == null) {
	label_0387d077: ;
			throw new NullReferenceException();
		}
		if ((buckets != 0) && (iVar4 = items._size, iVar4 != 0)) {
			(((long)local_68 + 8)).GetEnumerator((List<object>)items);
			local_48._current = local_50;
			local_48._list = (List<T>)local_68._8_8_;
			local_48._8_8_ = pSStack_58;
			local_68._8_8_ = null;
			pSStack_58 = &local_48;
			if (__this == null) {
				local_50 = (object)local_68;
				bVar9 = local_48.MoveNext();
				if (bVar9) {
					throw new NullReferenceException();
				}
			}
			else {
				index = 0;
				local_50 = (object)local_68;
				while (true) {
					bVar9 = local_48.MoveNext();
					item = local_48._current;
					if (!(bVar9)) break;
					pSVar11 = (List<object>)__this.get_Item(index);
					if (pSVar11 == null) {
	label_0387d07c: ;
						throw new NullReferenceException();
					}
					pMVar5 = (*(MethodInfo_377CDC0_RGCTXs*)(local_68._0_8_ + 0x38)). _12_System_Collections_Generic_List_T__Add;
					piVar1 = &pSVar11._version;
					*piVar1 = *piVar1 + 1;
					pSVar7 = pSVar11._items;
					if (pSVar7 == null) goto label_0387d07c;
					uVar3 = pSVar11._size;
					if (uVar3 < (uint)pSVar7.Length) {
						pSVar11._size = uVar3 + 1;
						pSVar7[(int)uVar3] = item;
					}
					else {
						pSVar11.AddWithResize(item);
					}
					index = index + (uint)(index < buckets + -1 && iVar4 / buckets <= pSVar11._size);
				}
			}
			local_48.Dispose();
		}
		return __this;
	}

	// Utility.Util$$GroupBuckets<__Il2CppFullySharedGenericType>: 36 lines keep C-only constructs
	private static System_Collections_Generic_List_List_T___o GroupBuckets___Il2CppFullySharedGenericType(List<T> items, int buckets)
	{
		Il2CppMethodPointer pIVar1;
		MethodInfo pMVar2;
		InvokerMethod pIVar3;
		Il2CppClass pIVar4;
		IntPtr pvVar5;
		long lVar6;
		ulong puVar7;
		System_Collections_Generic_List_List_T___o pSVar8;
		List<T> pSVar9;
		IntPtr __dest;
		sbyte cVar10;
		uint uVar11;
		int iVar12;
		int iVar13;
		Il2CppClass pIVar14;
		object pIVar15;
		MethodInfo_377D110_RGCTXs pMVar16;
		sbyte pcVar17;
		ulong uVar18;
		IntPtr pvVar19;
		ulong puVar20;
		ulong uVar21;
		int iVar22;
		ulong puVar23;
		object local_b8;
		object local_a8;
		MethodInfo_377D110* local_a0;
		long local_98;
		IntPtr local_90;
		long local_88;
		IntPtr local_80;
		ulong local_78;
		uint local_70;
		int local_6c;
		ulong local_68;
		sbyte local_60;
		System_Collections_Generic_List_List_T___o local_58;
		List<T> local_50;
		ulong local_48;
		IntPtr local_40;
		MethodInfo_377D110 local_38;

		pMVar16 = method.rgctx_data;
		local_50 = items;
		local_38 = method;
		if (pMVar16 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar16 = method.rgctx_data;
		}
		pIVar14 = pMVar16._7_System_Collections_Generic_List_Enumerator_T_;
		uVar11 = (pIVar14._2).stack_slot_size;
		pcVar17 = (sbyte)(ulong)uVar11;
		uVar21 = (ulong)(pMVar16._10_T._2).stack_slot_size;
		if (((pIVar14._2).bitflags1 & 1) == 0) {
			pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
			uVar11 = (pIVar14._2).stack_slot_size;
			pMVar16 = method.rgctx_data;
		}
		local_88 = (long)&local_b8 - ((ulong)(uVar11 + 0x10) + 0xf & 0xfffffffffffffff0);
		uVar18 = uVar21 + 0xf & 0xfffffffffffffff0;
		local_68 = (ulong)(local_88 - uVar18);
		puVar23 = (ulong)((long)local_68 - uVar18);
		local_b8.monitor = (IntPtr)((long)puVar23 - ((ulong)(pcVar17 + 0xf) & 0xfffffffffffffff0));
		pvVar19 = (IntPtr)((long)local_b8.monitor - ((ulong)(pcVar17 + 0xf) & 0xfffffffffffffff0));
		local_60 = pcVar17;
		local_40 = pvVar19;
		*(ulong)((long)pvVar19 + -8) = 0x387d1e3;
		memset(pvVar19, 0, (size_t)pcVar17);
		pvVar19 = (IntPtr)((long)pvVar19 - uVar18);
		local_80 = pvVar19;
		*(ulong)((long)pvVar19 + -8) = 0x387d1fa;
		memset(pvVar19, 0, uVar21);
		pIVar14 = pMVar16._0_System_Collections_Generic_List_List_T__;
		local_78 = uVar21;
		if (((pIVar14._2).bitflags1 & 1) == 0) {
			*(ulong)((long)pvVar19 + -8) = 0x387d20f;
			pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
		}
		*(ulong)((long)pvVar19 + -8) = 0x387d217;
		local_58 = (System_Collections_Generic_List_List_T___o)il2cpp_codegen_object_new(pIVar14);
		pIVar1 = local_38.rgctx_data._1_System_Collections_Generic_List_List_T____ctor.methodPointer;
		*(ulong)((long)pvVar19 + -8) = 0x387d22c;
		(*pIVar1)();
		if (0 < buckets) {
			if (local_58 == null) {
				pIVar14 = local_38.rgctx_data._2_System_Collections_Generic_List_T_;
				if (((pIVar14._2).bitflags1 & 1) == 0) {
					*(ulong)((long)pvVar19 + -8) = 0x387d51d;
					pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
				}
				*(ulong)((long)pvVar19 + -8) = 0x387d525;
				pIVar15 = il2cpp_codegen_object_new(pIVar14);
				pIVar1 = local_38.rgctx_data._3_System_Collections_Generic_List_T___ctor.methodPointer;
				*(ulong)((long)pvVar19 + -8) = 0x387d536;
				(*pIVar1)(pIVar15);
				*(ulong)((long)pvVar19 + -8) = 0x387d53b;
				throw new NullReferenceException();
			}
			iVar22 = buckets;
			do {
				pIVar14 = local_38.rgctx_data._2_System_Collections_Generic_List_T_;
				if (((pIVar14._2).bitflags1 & 1) == 0) {
					*(ulong)((long)pvVar19 + -8) = 0x387d2ab;
					pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
				}
				*(ulong)((long)pvVar19 + -8) = 0x387d255;
				pIVar15 = il2cpp_codegen_object_new(pIVar14);
				pIVar1 = local_38.rgctx_data._3_System_Collections_Generic_List_T___ctor.methodPointer;
				*(ulong)((long)pvVar19 + -8) = 0x387d269;
				(*pIVar1)(pIVar15);
				pSVar8 = local_58;
				pMVar2 = local_38.rgctx_data._4_System_Collections_Generic_List_List_T___Add;
				pIVar1 = pMVar2.methodPointer;
				pIVar3 = pMVar2.invoker_method;
				local_a8 = pIVar15;
				*(ulong)((long)pvVar19 + -8) = 0x387d28c;
				(*pIVar3)(pIVar1,pMVar2,pSVar8,&local_a8,pIVar15);
				iVar22 = iVar22 + -1;
			} while (iVar22 != 0);
		}
		pSVar9 = local_50;
		if (local_50 == null) {
			*(ulong)((long)pvVar19 + -8) = 0x387d503;
			throw new NullReferenceException();
		}
		pIVar1 = local_38.rgctx_data._5_System_Collections_Generic_List_T__get_Count.methodPointer;
		*(ulong)((long)pvVar19 + -8) = 0x387d2ce;
		iVar12 = (*pIVar1)(pSVar9);
		if ((buckets != 0) && (iVar12 != 0)) {
			pIVar1 = local_38.rgctx_data._5_System_Collections_Generic_List_T__get_Count.methodPointer;
			*(ulong)((long)pvVar19 + -8) = 0x387d2f0;
			local_6c = (*pIVar1)(pSVar9);
			pvVar5 = local_b8.monitor;
			local_6c = local_6c / buckets;
			pMVar2 = local_38.rgctx_data._6_System_Collections_Generic_List_T__GetEnumerator;
			pIVar1 = pMVar2.methodPointer;
			local_a8 = local_b8.monitor;
			pIVar3 = pMVar2.invoker_method;
			*(ulong)((long)pvVar19 + -8) = 0x387d324;
			(*pIVar3)(pIVar1,pMVar2,pSVar9,&local_a8,pvVar5);
			__dest = local_40;
			pcVar17 = local_60;
			*(ulong)((long)pvVar19 + -8) = 0x387d334;
			memcpy(__dest, pvVar5, (size_t)pcVar17);
			pvVar5 = local_40;
			local_a8 = null;
			local_a0 = &local_38;
			local_98 = &local_88;
			local_90 = &local_40;
			if (local_58 == null) {
				pIVar1 = local_38.rgctx_data._13_System_Collections_Generic_List_Enumerator_T__MoveNext.methodPointer ;
				*(ulong)((long)pvVar19 + -8) = 0x387d49b;
				cVar10 = (*pIVar1)(pvVar5);
				pvVar5 = local_40;
				puVar23 = local_68;
				if (cVar10 != false) {
					pMVar2 = local_38.rgctx_data._8_System_Collections_Generic_List_Enumerator_T__get_Current;
					pIVar1 = pMVar2.methodPointer;
					local_48 = local_68;
					pIVar3 = pMVar2.invoker_method;
					*(ulong)((long)pvVar19 + -8) = 0x387d565;
					(*pIVar3)(pIVar1,pMVar2,pvVar5,&local_48,puVar23);
					puVar23 = local_68;
					uVar21 = local_78;
					pvVar5 = local_80;
					*(ulong)((long)pvVar19 + -8) = 0x387d576;
					memcpy(pvVar5, puVar23, uVar21);
					*(ulong)((long)pvVar19 + -8) = 0x387d57b;
					throw new NullReferenceException();
				}
			}
			else {
				local_50 = (List<T>)((ulong)local_50 & 0xffffffff00000000);
				local_60 = (sbyte)CONCAT44(local_60._4_4_, buckets + -1);
				while(true) {
					pvVar5 = local_40;
					pIVar1 = local_38.rgctx_data._13_System_Collections_Generic_List_Enumerator_T__MoveNext. methodPointer;
					*(ulong)((long)pvVar19 + -8) = 0x387d392;
					cVar10 = (*pIVar1)(pvVar5);
					pvVar5 = local_40;
					puVar7 = local_68;
					if (cVar10 == false) break;
					pMVar2 = local_38.rgctx_data._8_System_Collections_Generic_List_Enumerator_T__get_Current;
					pIVar1 = pMVar2.methodPointer;
					local_48 = local_68;
					pIVar3 = pMVar2.invoker_method;
					*(ulong)((long)pvVar19 + -8) = 0x387d3c1;
					(*pIVar3)(pIVar1,pMVar2,pvVar5,&local_48,puVar7);
					uVar21 = local_78;
					pvVar5 = local_80;
					*(ulong)((long)pvVar19 + -8) = 0x387d3d7;
					memcpy(pvVar5, puVar7, uVar21);
					pSVar8 = local_58;
					pMVar2 = local_38.rgctx_data._11_System_Collections_Generic_List_List_T___get_Item;
					pIVar1 = pMVar2.methodPointer;
					local_70 = (int)local_50;
					local_b8.klass = (Il2CppClass)&local_70;
					pIVar3 = pMVar2.invoker_method;
					*(ulong)((long)pvVar19 + -8) = 0x387d408;
					(*pIVar3)(pIVar1,pMVar2,pSVar8,&local_b8.klass,&local_48);
					puVar7 = local_48;
					*(ulong)((long)pvVar19 + -8) = 0x387d41a;
					memcpy(puVar23, pvVar5, uVar21);
					if (puVar7 == null) {
						*(ulong)((long)pvVar19 + -8) = 0x387d4fe;
						throw new NullReferenceException();
					}
					iVar12 = (int)local_60;
					puVar20 = puVar23;
					if (-1 < (int)(local_38.rgctx_data._10_T._1).byval_arg.bits) {
						puVar20 = (ulong)*puVar23;
					}
					pMVar2 = local_38.rgctx_data._12_System_Collections_Generic_List_T__Add;
					pIVar1 = pMVar2.methodPointer;
					pIVar3 = pMVar2.invoker_method;
					local_48 = puVar20;
					*(ulong)((long)pvVar19 + -8) = 0x387d45a;
					(*pIVar3)(pIVar1,pMVar2,puVar7,&local_48,puVar20);
					pIVar1 = local_38.rgctx_data._5_System_Collections_Generic_List_T__get_Count.methodPointer;
					*(ulong)((long)pvVar19 + -8) = 0x387d46b;
					iVar13 = (*pIVar1)(puVar7);
					local_50 = (List<T>)CONCAT44(local_50._4_4_, (int)local_50 + (uint)((int)local_50 < iVar12 && local_6c <= iVar13));
				}
			}
			pMVar16 = local_38.rgctx_data;
			pIVar14 = pMVar16._7_System_Collections_Generic_List_Enumerator_T_;
			if (((pIVar14._2).bitflags1 & 1) == 0) {
				*(ulong)((long)pvVar19 + -8) = 0x387d4bf;
				pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
				pMVar16 = local_38.rgctx_data;
			}
			pvVar5 = local_40;
			lVar6 = local_88;
			pIVar4 = pMVar16[1]._0_System_Collections_Generic_List_List_T__;
			*(ulong)((long)pvVar19 + -8) = 0x387d4e1;
			il2cpp_runtime_helper_030d6e00(pIVar14, pIVar4, lVar6, pvVar5, 0, 0);
		}
		return local_58;
	}

	// Utility.Util$$GroupItems<object>: 25 lines keep C-only constructs
	private static System_Collections_Generic_List_List_T___o GroupItems_object(List<T> items, int groupSize)
	{
		int piVar1;
		byte bVar2;
		uint uVar3;
		MethodInfo pMVar4;
		List<T>[] pSVar5;
		Object[] pSVar6;
		object item;
		bool bVar7;
		Il2CppClass pIVar8;
		System_Collections_Generic_List_List_T___o __this;
		List<object> __this_00;
		int iVar9;
		byte[] local_68 = new byte[16];
		System_Collections_Generic_List_Enumerator_object__o pSStack_58;
		object local_50;
		System_Collections_Generic_List_Enumerator_object__o local_48;

		local_68._0_8_ = method;
		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pIVar8 = method.rgctx_data._0_System_Collections_Generic_List_List_T__;
			bVar2 = (pIVar8._2).bitflags1;
		}
		else {
			pIVar8 = method.rgctx_data._0_System_Collections_Generic_List_List_T__;
			bVar2 = (pIVar8._2).bitflags1;
		}
		if ((bVar2 & 1) == 0) {
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
		}
		__this = (System_Collections_Generic_List_List_T___o)il2cpp_codegen_object_new(pIVar8);
		__this = new List<object>();
		if (items != null) {
			if (items._size == 0) {
				return __this;
			}
			pIVar8 = method.rgctx_data._2_System_Collections_Generic_List_T_;
			if (((pIVar8._2).bitflags1 & 1) == 0) {
				pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			}
			__this_00 = (List<object>)il2cpp_codegen_object_new(pIVar8);
			__this_00 = new List<object>();
			if (__this != null) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar5 = __this._items;
				if (pSVar5 != null) {
					uVar3 = __this._size;
					if (uVar3 < (uint)pSVar5.Length) {
						__this._size = uVar3 + 1;
						pSVar5[(int)uVar3] = (List<T>)__this_00;
						method = (MethodInfo_377D5D0)local_68._0_8_;
					}
					else {
						__this.AddWithResize((object)__this_00);
					}
					(((long)local_68 + 8)).GetEnumerator((List<object>)items);
					local_48._current = local_50;
					local_48._list = (List<T>)local_68._8_8_;
					local_48._8_8_ = pSStack_58;
					local_68._8_8_ = null;
					iVar9 = 0;
					pSStack_58 = &local_48;
					local_50 = (object)local_68;
					while(true) {
						bVar7 = local_48.MoveNext();
						item = local_48._current;
						if (!bVar7) {
							local_48.Dispose();
							return __this;
						}
						iVar9 = iVar9 + 1;
						if (groupSize + 1 <= iVar9) {
							pIVar8 = (*(MethodInfo_377D5D0_RGCTXs*)(local_68._0_8_ + 0x38)). _2_System_Collections_Generic_List_T_;
							if (((pIVar8._2).bitflags1 & 1) == 0) {
								pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
							}
							__this_00 = (List<object>)il2cpp_codegen_object_new(pIVar8);
							__this_00 = new List<object>();
							pMVar4 = (*(MethodInfo_377D5D0_RGCTXs*)(local_68._0_8_ + 0x38)). _5_System_Collections_Generic_List_List_T___Add;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar5 = __this._items;
							if (pSVar5 == null) {
								throw new NullReferenceException();
							}
							uVar3 = __this._size;
							if (uVar3 < (uint)pSVar5.Length) {
								__this._size = uVar3 + 1;
								pSVar5[(int)uVar3] = (List<T>)__this_00;
								iVar9 = 1;
							}
							else {
								iVar9 = 1;
								__this.AddWithResize((object)__this_00);
							}
						}
						if (__this_00 == null) break;
						pMVar4 = (*(MethodInfo_377D5D0_RGCTXs*)(local_68._0_8_ + 0x38)). _11_System_Collections_Generic_List_T__Add;
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = __this_00._items;
						if (pSVar6 == null) break;
						uVar3 = __this_00._size;
						if (uVar3 < (uint)pSVar6.Length) {
							__this_00._size = uVar3 + 1;
							pSVar6[(int)uVar3] = item;
						}
						else {
							__this_00.AddWithResize(item);
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	// Utility.Util$$GroupItems<__Il2CppFullySharedGenericType>: 29 lines keep C-only constructs
	private static System_Collections_Generic_List_List_T___o GroupItems___Il2CppFullySharedGenericType(List<T> items, int groupSize)
	{
		Il2CppMethodPointer pIVar1;
		MethodInfo pMVar2;
		InvokerMethod pIVar3;
		long lVar4;
		ulong __n;
		List<T> pSVar5;
		IntPtr pvVar6;
		sbyte cVar7;
		uint uVar8;
		int iVar9;
		Il2CppClass pIVar10;
		ulong uVar11;
		System_Collections_Generic_List_List_T___o pSVar12;
		MethodInfo_377D910_RGCTXs pMVar13;
		IntPtr pvVar14;
		Il2CppClass pIVar15;
		ulong uVar16;
		ulong uVar17;
		Il2CppClass pIVar18;
		Il2CppClass pIStack_a8;
		ulong local_a0;
		Il2CppClass local_98;
		Il2CppClass local_90;
		MethodInfo_377D910* local_88;
		long local_80;
		IntPtr local_78;
		long local_70;
		ulong local_68;
		System_Collections_Generic_List_List_T___o local_60;
		List<T> local_58;
		int local_4c;
		Il2CppClass local_48;
		IntPtr local_40;
		MethodInfo_377D910 local_38;

		pMVar13 = method.rgctx_data;
		local_58 = items;
		local_4c = groupSize;
		local_38 = method;
		if (pMVar13 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar13 = method.rgctx_data;
		}
		pIVar10 = pMVar13._7_System_Collections_Generic_List_Enumerator_T_;
		uVar8 = (pIVar10._2).stack_slot_size;
		uVar17 = (ulong)uVar8;
		local_68 = (ulong)(pMVar13._10_T._2).stack_slot_size;
		if (((pIVar10._2).bitflags1 & 1) == 0) {
			pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			uVar8 = (pIVar10._2).stack_slot_size;
			pMVar13 = method.rgctx_data;
		}
		__n = local_68;
		local_70 = (long)&pIStack_a8 - ((ulong)(uVar8 + 0x10) + 0xf & 0xfffffffffffffff0);
		uVar16 = local_68 + 0xf & 0xfffffffffffffff0;
		pIVar18 = (Il2CppClass)(local_70 - uVar16);
		uVar11 = uVar17 + 0xf & 0xfffffffffffffff0;
		local_98 = (Il2CppClass)((long)pIVar18 - uVar11);
		pvVar14 = (IntPtr)((long)local_98 - uVar11);
		local_a0 = uVar17;
		local_40 = pvVar14;
		*(ulong)((long)pvVar14 + -8) = 0x387d9db;
		memset(pvVar14, 0, uVar17);
		pvVar14 = (IntPtr)((long)pvVar14 - uVar16);
		*(ulong)((long)pvVar14 + -8) = 0x387d9f1;
		memset(pvVar14, 0, __n);
		pIVar10 = pMVar13._0_System_Collections_Generic_List_List_T__;
		if (((pIVar10._2).bitflags1 & 1) == 0) {
			*(ulong)((long)pvVar14 + -8) = 0x387da02;
			pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
		}
		pSVar5 = local_58;
		*(ulong)((long)pvVar14 + -8) = 0x387da0e;
		pSVar12 = (System_Collections_Generic_List_List_T___o)il2cpp_codegen_object_new(pIVar10);
		pIVar1 = local_38.rgctx_data._1_System_Collections_Generic_List_List_T____ctor.methodPointer;
		*(ulong)((long)pvVar14 + -8) = 0x387da22;
		(*pIVar1)(pSVar12);
		if (pSVar5 == null) {
	label_0387dc89: ;
			*(ulong)((long)pvVar14 + -8) = 0x387dc8e;
			throw new NullReferenceException();
		}
		pIVar1 = local_38.rgctx_data._3_System_Collections_Generic_List_T__get_Count.methodPointer;
		*(ulong)((long)pvVar14 + -8) = 0x387da3c;
		iVar9 = (*pIVar1)(pSVar5);
		if (iVar9 != 0) {
			pIVar10 = local_38.rgctx_data._2_System_Collections_Generic_List_T_;
			if (((pIVar10._2).bitflags1 & 1) == 0) {
				*(ulong)((long)pvVar14 + -8) = 0x387da5e;
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			}
			*(ulong)((long)pvVar14 + -8) = 0x387da66;
			pIVar10 = (Il2CppClass)il2cpp_codegen_object_new(pIVar10);
			pIVar1 = local_38.rgctx_data._4_System_Collections_Generic_List_T___ctor.methodPointer;
			*(ulong)((long)pvVar14 + -8) = 0x387da7a;
			(*pIVar1)(pIVar10);
			if (pSVar12 == null) goto label_0387dc89;
			pMVar2 = local_38.rgctx_data._5_System_Collections_Generic_List_List_T___Add;
			pIVar1 = pMVar2.methodPointer;
			pIVar3 = pMVar2.invoker_method;
			local_90 = pIVar10;
			local_60 = pSVar12;
			*(ulong)((long)pvVar14 + -8) = 0x387daad;
			(*pIVar3)(pIVar1,pMVar2,pSVar12,&local_90,pIVar10);
			pSVar5 = local_58;
			pIVar15 = local_98;
			pMVar2 = local_38.rgctx_data._6_System_Collections_Generic_List_T__GetEnumerator;
			pIVar1 = pMVar2.methodPointer;
			local_90 = local_98;
			pIVar3 = pMVar2.invoker_method;
			*(ulong)((long)pvVar14 + -8) = 0x387dadb;
			(*pIVar3)(pIVar1,pMVar2,pSVar5,&local_90,pIVar15);
			pvVar6 = local_40;
			uVar17 = local_a0;
			*(ulong)((long)pvVar14 + -8) = 0x387daee;
			memcpy(pvVar6, pIVar15, uVar17);
			local_90 = null;
			local_88 = &local_38;
			local_80 = &local_70;
			local_78 = &local_40;
			local_4c = local_4c + 1;
			iVar9 = 0;
			while(true) {
				pvVar6 = local_40;
				pIVar1 = local_38.rgctx_data._12_System_Collections_Generic_List_Enumerator_T__MoveNext.methodPointer ;
				*(ulong)((long)pvVar14 + -8) = 0x387db47;
				cVar7 = (*pIVar1)(pvVar6);
				pvVar6 = local_40;
				pSVar12 = local_60;
				if (cVar7 == false) break;
				pMVar2 = local_38.rgctx_data._8_System_Collections_Generic_List_Enumerator_T__get_Current;
				pIVar1 = pMVar2.methodPointer;
				pIVar3 = pMVar2.invoker_method;
				local_48 = pIVar18;
				*(ulong)((long)pvVar14 + -8) = 0x387db70;
				(*pIVar3)(pIVar1,pMVar2,pvVar6,&local_48,pIVar18);
				uVar17 = local_68;
				*(ulong)((long)pvVar14 + -8) = 0x387db7f;
				memcpy(pvVar14, pIVar18, uVar17);
				pSVar12 = local_60;
				iVar9 = iVar9 + 1;
				if (local_4c <= iVar9) {
					pIVar10 = local_38.rgctx_data._2_System_Collections_Generic_List_T_;
					if (((pIVar10._2).bitflags1 & 1) == 0) {
						*(ulong)((long)pvVar14 + -8) = 0x387dba9;
						pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
					}
					*(ulong)((long)pvVar14 + -8) = 0x387dbbc;
					pIVar10 = (Il2CppClass)il2cpp_codegen_object_new(pIVar10);
					pIVar1 = local_38.rgctx_data._4_System_Collections_Generic_List_T___ctor.methodPointer;
					*(ulong)((long)pvVar14 + -8) = 0x387dbd0;
					(*pIVar1)(pIVar10);
					pMVar2 = local_38.rgctx_data._5_System_Collections_Generic_List_List_T___Add;
					pIVar1 = pMVar2.methodPointer;
					pIVar3 = pMVar2.invoker_method;
					local_48 = pIVar10;
					*(ulong)((long)pvVar14 + -8) = 0x387dbf0;
					(*pIVar3)(pIVar1,pMVar2,pSVar12,&local_48,pIVar10);
					iVar9 = 1;
				}
				uVar17 = local_68;
				*(ulong)((long)pvVar14 + -8) = 0x387dc05;
				memcpy(pIVar18, pvVar14, uVar17);
				if (pIVar10 == null) {
					*(ulong)((long)pvVar14 + -8) = 0x387dc89;
					throw new NullReferenceException();
				}
				pIVar15 = pIVar18;
				if (-1 < (int)(local_38.rgctx_data._10_T._1).byval_arg.bits) {
					pIVar15 = (pIVar18._1).image;
				}
				pMVar2 = local_38.rgctx_data._11_System_Collections_Generic_List_T__Add;
				pIVar1 = pMVar2.methodPointer;
				pIVar3 = pMVar2.invoker_method;
				local_48 = pIVar15;
				*(ulong)((long)pvVar14 + -8) = 0x387db35;
				(*pIVar3)(pIVar1,pMVar2,pIVar10,&local_48,pIVar15);
			}
			pMVar13 = local_38.rgctx_data;
			pIVar10 = pMVar13._7_System_Collections_Generic_List_Enumerator_T_;
			if (((pIVar10._2).bitflags1 & 1) == 0) {
				*(ulong)((long)pvVar14 + -8) = 0x387dc4b;
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				pMVar13 = local_38.rgctx_data;
			}
			pvVar6 = local_40;
			lVar4 = local_70;
			pIVar18 = pMVar13[1]._0_System_Collections_Generic_List_List_T__;
			*(ulong)((long)pvVar14 + -8) = 0x387dc6d;
			il2cpp_runtime_helper_030d6e00(pIVar10, pIVar18, lVar4, pvVar6, 0, 0);
		}
		return pSVar12;
	}

	// Utility.Util$$PaginateDictionary<object, object>: 50 lines keep C-only constructs
	private static System_Collections_Generic_List_TValue__o PaginateDictionary_object_object(Dictionary<TKey, TValue> dict, int pageNumber, int elementsPerPage)
	{
		MethodInfo_377DCF0_RGCTXs* ppMVar1;
		byte bVar2;
		object pIVar3;
		MethodInfo_377DCF0_RGCTXs pMVar4;
		Il2CppClass pIVar5;
		Func<T, TResult> pSVar6;
		System_Linq_IOrderedEnumerable_TSource__o source;
		System_Collections_Generic_List_TSource__o pSVar7;
		System_Collections_Generic_IEnumerable_TSource__o pSVar8;
		System_Collections_Generic_IEnumerable_TResult__o source_00;

		ppMVar1 = &method.rgctx_data;
		pMVar4 = method.rgctx_data;
		if (pMVar4 == null) {
			pMVar4 = *ppMVar1;
			if (pMVar4 != null) goto label_0387dd28;
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pIVar5 = method.rgctx_data._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) == 0) goto label_0387dd7e;
	label_0387dd35: ;
			if ((pIVar5._2).cctor_finished_or_no_cctor != 0) goto label_0387dd3e;
	label_0387dd8f: ;
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) == 0) goto label_0387dda5;
	label_0387dd4f: ;
			pSVar6 = *(Func<T, TResult>*)((long)pIVar5.static_fields + 8);
		}
		else {
	label_0387dd28: ;
			pIVar5 = pMVar4._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) != 0) goto label_0387dd35;
	label_0387dd7e: ;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			if ((pIVar5._2).cctor_finished_or_no_cctor == 0) goto label_0387dd8f;
	label_0387dd3e: ;
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) != 0) goto label_0387dd4f;
	label_0387dda5: ;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pSVar6 = *(Func<T, TResult>*)((long)pIVar5.static_fields + 8);
		}
		if (pSVar6 == null) {
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
				if ((pIVar5._2).cctor_finished_or_no_cctor == 0) goto label_0387e0a3;
	label_0387dde3: ;
				pMVar4 = *ppMVar1;
				pIVar5 = pMVar4._3_Utility_Util___c__33_TKey__TValue_;
				bVar2 = (pIVar5._2).bitflags1;
			}
			else {
				if ((pIVar5._2).cctor_finished_or_no_cctor != 0) goto label_0387dde3;
	label_0387e0a3: ;
				pMVar4 = *ppMVar1;
				pIVar5 = pMVar4._3_Utility_Util___c__33_TKey__TValue_;
				bVar2 = (pIVar5._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
				pMVar4 = *ppMVar1;
			}
			pIVar3 = *(object*)pIVar5.static_fields;
			pIVar5 = pMVar4._2_System_Func_KeyValuePair_TKey__TValue___TKey_;
			if (((pIVar5._2).bitflags1 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			}
			pSVar6 = (Func<T, TResult>)il2cpp_codegen_object_new(pIVar5);
			pSVar6 = new Func<KeyValuePair<object, object>, object>(pIVar3, (intptr_t)(*ppMVar1)._4_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_0);
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			}
			*(Func<T, TResult>*)((long)pIVar5.static_fields + 8) = pSVar6;
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			}
		}
		source = Enumerable.OrderBy<KeyValuePair<object, object>, object>((System_Collections_Generic_IEnumerable_TSource__o)dict, (System_Func_TSource__TKey__o)pSVar6);
		pSVar7 = Enumerable.ToList<KeyValuePair<object, object>>((System_Collections_Generic_IEnumerable_TSource__o)source);
		if (pSVar7 == null) {
			throw new NullReferenceException();
		}
		pSVar8 = Enumerable.Skip<KeyValuePair<object, object>>((System_Collections_Generic_IEnumerable_TSource__o)pSVar7, (pageNumber + -1) * elementsPerPage);
		pSVar8 = Enumerable.Take<KeyValuePair<object, object>>(pSVar8, elementsPerPage);
		pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			if ((pIVar5._2).cctor_finished_or_no_cctor == 0) goto label_0387df55;
	label_0387df1d: ;
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) != 0) goto label_0387df2e;
	label_0387df6b: ;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pSVar6 = *(Func<T, TResult>*)((long)pIVar5.static_fields + 0x10);
		}
		else {
			if ((pIVar5._2).cctor_finished_or_no_cctor != 0) goto label_0387df1d;
	label_0387df55: ;
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) == 0) goto label_0387df6b;
	label_0387df2e: ;
			pSVar6 = *(Func<T, TResult>*)((long)pIVar5.static_fields + 0x10);
		}
		if (pSVar6 != null) goto label_0387e057;
		pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			if ((pIVar5._2).cctor_finished_or_no_cctor == 0) goto label_0387e0d7;
	label_0387dfa9: ;
			pMVar4 = *ppMVar1;
			pIVar5 = pMVar4._3_Utility_Util___c__33_TKey__TValue_;
			bVar2 = (pIVar5._2).bitflags1;
		}
		else {
			if ((pIVar5._2).cctor_finished_or_no_cctor != 0) goto label_0387dfa9;
	label_0387e0d7: ;
			pMVar4 = *ppMVar1;
			pIVar5 = pMVar4._3_Utility_Util___c__33_TKey__TValue_;
			bVar2 = (pIVar5._2).bitflags1;
		}
		if ((bVar2 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pMVar4 = *ppMVar1;
		}
		pIVar3 = *(object*)pIVar5.static_fields;
		pIVar5 = pMVar4._14_System_Func_KeyValuePair_TKey__TValue___TValue_;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		pSVar6 = (Func<T, TResult>)il2cpp_codegen_object_new(pIVar5);
		pSVar6 = new Func<KeyValuePair<object, object>, object>(pIVar3, (intptr_t)(*ppMVar1)._15_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_1);
		pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		*(Func<T, TResult>*)((long)pIVar5.static_fields + 0x10) = pSVar6;
		pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
	label_0387e057: ;
		source_00 = Enumerable.Select<KeyValuePair<object, object>, object>(pSVar8, (System_Func_TSource__TResult__o)pSVar6);
		pSVar7 = Enumerable.ToList<object>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		return (System_Collections_Generic_List_TValue__o)pSVar7;
	}

	// Utility.Util$$PaginateDictionary<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>: 50 lines keep C-only constructs
	private static System_Collections_Generic_List_TValue__o PaginateDictionary___Il2CppFullySharedGenericType___Il2CppFullySharedGenericType(Dictionary<TKey, TValue> dict, int pageNumber, int elementsPerPage)
	{
		MethodInfo_377E1D0_RGCTXs* ppMVar1;
		byte bVar2;
		ulong uVar3;
		Il2CppMethodPointer vtableDispatch;
		MethodInfo_377E1D0_RGCTXs pMVar4;
		Il2CppClass pIVar5;
		object pIVar6;
		ulong uVar7;
		long lVar8;
		System_Collections_Generic_List_TValue__o pSVar9;
		byte[] auVar10 = new byte[16];

		ppMVar1 = &method.rgctx_data;
		pMVar4 = method.rgctx_data;
		if (pMVar4 == null) {
			pMVar4 = *ppMVar1;
			if (pMVar4 != null) goto label_0387e208;
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pIVar5 = method.rgctx_data._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) == 0) goto label_0387e25e;
	label_0387e215: ;
			if ((pIVar5._2).cctor_finished_or_no_cctor != 0) goto label_0387e21e;
	label_0387e26f: ;
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) == 0) goto label_0387e285;
	label_0387e22f: ;
			pIVar6 = *(object*)((long)pIVar5.static_fields + 8);
		}
		else {
	label_0387e208: ;
			pIVar5 = pMVar4._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) != 0) goto label_0387e215;
	label_0387e25e: ;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			if ((pIVar5._2).cctor_finished_or_no_cctor == 0) goto label_0387e26f;
	label_0387e21e: ;
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) != 0) goto label_0387e22f;
	label_0387e285: ;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pIVar6 = *(object*)((long)pIVar5.static_fields + 8);
		}
		if (pIVar6 == null) {
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
				if ((pIVar5._2).cctor_finished_or_no_cctor == 0) goto label_0387e57b;
	label_0387e2c3: ;
				pMVar4 = *ppMVar1;
				pIVar5 = pMVar4._3_Utility_Util___c__33_TKey__TValue_;
				bVar2 = (pIVar5._2).bitflags1;
			}
			else {
				if ((pIVar5._2).cctor_finished_or_no_cctor != 0) goto label_0387e2c3;
	label_0387e57b: ;
				pMVar4 = *ppMVar1;
				pIVar5 = pMVar4._3_Utility_Util___c__33_TKey__TValue_;
				bVar2 = (pIVar5._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
				pMVar4 = *ppMVar1;
			}
			uVar7 = *(ulong)pIVar5.static_fields;
			pIVar5 = pMVar4._2_System_Func_KeyValuePair_TKey__TValue___TKey_;
			if (((pIVar5._2).bitflags1 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			}
			pIVar6 = il2cpp_codegen_object_new(pIVar5);
			(*(*ppMVar1)._5_System_Func_KeyValuePair_TKey__TValue___TKey___ctor.methodPointer)(pIVar6,uVar7,(*ppMVar1)._4_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_0);
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			}
			*(object*)((long)pIVar5.static_fields + 8) = pIVar6;
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			}
		}
		uVar7 = (*(*ppMVar1)._6_System_Linq_Enumerable_OrderBy_KeyValuePair_TKey__TValue___TKey_.methodPointer)(dict,pIVar6);
		lVar8 = (*(*ppMVar1)._9_System_Linq_Enumerable_ToList_KeyValuePair_TKey__TValue__.methodPointer)(uVar7);
		if (lVar8 == 0) {
			throw new NullReferenceException();
		}
		(*(*ppMVar1)._11_System_Collections_Generic_List_KeyValuePair_TKey__TValue___get_Count.methodPointer)(lVar8);
		uVar7 = (*(*ppMVar1)._12_System_Linq_Enumerable_Skip_KeyValuePair_TKey__TValue__.methodPointer)(lVar8,(ulong)(uint)((pageNumber + -1) * elementsPerPage));
		uVar7 = (*(*ppMVar1)._13_System_Linq_Enumerable_Take_KeyValuePair_TKey__TValue__.methodPointer)(uVar7,(ulong)(uint)elementsPerPage);
		pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			if ((pIVar5._2).cctor_finished_or_no_cctor == 0) goto label_0387e433;
	label_0387e3fb: ;
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) != 0) goto label_0387e40c;
	label_0387e449: ;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pIVar6 = *(object*)((long)pIVar5.static_fields + 0x10);
		}
		else {
			if ((pIVar5._2).cctor_finished_or_no_cctor != 0) goto label_0387e3fb;
	label_0387e433: ;
			pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
			if (((pIVar5._2).bitflags1 & 1) == 0) goto label_0387e449;
	label_0387e40c: ;
			pIVar6 = *(object*)((long)pIVar5.static_fields + 0x10);
		}
		if (pIVar6 != null) goto label_0387e532;
		pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			if ((pIVar5._2).cctor_finished_or_no_cctor == 0) goto label_0387e5af;
	label_0387e487: ;
			pMVar4 = *ppMVar1;
			pIVar5 = pMVar4._3_Utility_Util___c__33_TKey__TValue_;
			bVar2 = (pIVar5._2).bitflags1;
		}
		else {
			if ((pIVar5._2).cctor_finished_or_no_cctor != 0) goto label_0387e487;
	label_0387e5af: ;
			pMVar4 = *ppMVar1;
			pIVar5 = pMVar4._3_Utility_Util___c__33_TKey__TValue_;
			bVar2 = (pIVar5._2).bitflags1;
		}
		if ((bVar2 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pMVar4 = *ppMVar1;
		}
		uVar3 = *(ulong)pIVar5.static_fields;
		pIVar5 = pMVar4._14_System_Func_KeyValuePair_TKey__TValue___TValue_;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		pIVar6 = il2cpp_codegen_object_new(pIVar5);
		(*(*ppMVar1)._16_System_Func_KeyValuePair_TKey__TValue___TValue___ctor.methodPointer)(pIVar6,uVar3,(*ppMVar1)._15_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_1);
		pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		*(object*)((long)pIVar5.static_fields + 0x10) = pIVar6;
		pIVar5 = (*ppMVar1)._3_Utility_Util___c__33_TKey__TValue_;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
	label_0387e532: ;
		auVar10 = (*(*ppMVar1)._17_System_Linq_Enumerable_Select_KeyValuePair_TKey__TValue___TValue_.methodPointer )(uVar7,pIVar6);
		vtableDispatch = (*ppMVar1)._19_System_Linq_Enumerable_ToList_TValue_.methodPointer;
		pSVar9 = (System_Collections_Generic_List_TValue__o)(*vtableDispatch)(auVar10._0_8_,(*ppMVar1)._19_System_Linq_Enumerable_ToList_TValue_,auVar10._8_8_, vtableDispatch);
		return pSVar9;
	}

	// Utility.Util$$RemoveNull<object>: 10 lines keep C-only constructs
	private static HashSet<T> RemoveNull_object(HashSet<T> set)
	{
		byte bVar1;
		object @object;
		Il2CppClass pIVar2;
		Predicate<T> match;
		MethodInfo_377E5E0_RGCTXs pMVar3;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pIVar2 = method.rgctx_data._3_Utility_Util___c__10_T_;
			if (((pIVar2._2).bitflags1 & 1) == 0) goto label_0387e676;
	label_0387e604: ;
			if ((pIVar2._2).cctor_finished_or_no_cctor != 0) goto label_0387e60d;
	label_0387e687: ;
			pIVar2 = method.rgctx_data._3_Utility_Util___c__10_T_;
			if (((pIVar2._2).bitflags1 & 1) == 0) goto label_0387e69d;
	label_0387e61e: ;
			match = *(Predicate<T>*)((long)pIVar2.static_fields + 8);
		}
		else {
			pIVar2 = method.rgctx_data._3_Utility_Util___c__10_T_;
			if (((pIVar2._2).bitflags1 & 1) != 0) goto label_0387e604;
	label_0387e676: ;
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			if ((pIVar2._2).cctor_finished_or_no_cctor == 0) goto label_0387e687;
	label_0387e60d: ;
			pIVar2 = method.rgctx_data._3_Utility_Util___c__10_T_;
			if (((pIVar2._2).bitflags1 & 1) != 0) goto label_0387e61e;
	label_0387e69d: ;
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			match = *(Predicate<T>*)((long)pIVar2.static_fields + 8);
		}
		if (match != null) goto joined_r0x0387e789;
		pIVar2 = method.rgctx_data._3_Utility_Util___c__10_T_;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			if ((pIVar2._2).cctor_finished_or_no_cctor == 0) goto label_0387e7a9;
	label_0387e6db: ;
			pMVar3 = method.rgctx_data;
			pIVar2 = pMVar3._3_Utility_Util___c__10_T_;
			bVar1 = (pIVar2._2).bitflags1;
		}
		else {
			if ((pIVar2._2).cctor_finished_or_no_cctor != 0) goto label_0387e6db;
	label_0387e7a9: ;
			pMVar3 = method.rgctx_data;
			pIVar2 = pMVar3._3_Utility_Util___c__10_T_;
			bVar1 = (pIVar2._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			pMVar3 = method.rgctx_data;
		}
		@object = *(@object*)pIVar2.static_fields;
		pIVar2 = pMVar3._2_System_Predicate_T_;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		match = (Predicate<T>)il2cpp_codegen_object_new(pIVar2);
		match = new Predicate<@object>(@object, (intptr_t)method.rgctx_data._4_Utility_Util___c__10_T___RemoveNull_b__10_0);
		pIVar2 = method.rgctx_data._3_Utility_Util___c__10_T_;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		*(Predicate<T>*)((long)pIVar2.static_fields + 8) = match;
		pIVar2 = method.rgctx_data._3_Utility_Util___c__10_T_;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
	joined_r0x0387e789: ;
		if (set == null) {
			throw new NullReferenceException();
		}
		set.RemoveWhere(match);
		return set;
	}

	// Utility.Util$$RemoveNullOrDead<object>: 10 lines keep C-only constructs
	private static HashSet<T> RemoveNullOrDead_object(HashSet<T> set)
	{
		byte bVar1;
		object @object;
		Il2CppClass pIVar2;
		Predicate<T> match;
		MethodInfo_377E7D0_RGCTXs pMVar3;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pIVar2 = method.rgctx_data._3_Utility_Util___c__11_T_;
			if (((pIVar2._2).bitflags1 & 1) == 0) goto label_0387e866;
	label_0387e7f4: ;
			if ((pIVar2._2).cctor_finished_or_no_cctor != 0) goto label_0387e7fd;
	label_0387e877: ;
			pIVar2 = method.rgctx_data._3_Utility_Util___c__11_T_;
			if (((pIVar2._2).bitflags1 & 1) == 0) goto label_0387e88d;
	label_0387e80e: ;
			match = *(Predicate<T>*)((long)pIVar2.static_fields + 8);
		}
		else {
			pIVar2 = method.rgctx_data._3_Utility_Util___c__11_T_;
			if (((pIVar2._2).bitflags1 & 1) != 0) goto label_0387e7f4;
	label_0387e866: ;
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			if ((pIVar2._2).cctor_finished_or_no_cctor == 0) goto label_0387e877;
	label_0387e7fd: ;
			pIVar2 = method.rgctx_data._3_Utility_Util___c__11_T_;
			if (((pIVar2._2).bitflags1 & 1) != 0) goto label_0387e80e;
	label_0387e88d: ;
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			match = *(Predicate<T>*)((long)pIVar2.static_fields + 8);
		}
		if (match != null) goto joined_r0x0387e979;
		pIVar2 = method.rgctx_data._3_Utility_Util___c__11_T_;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			if ((pIVar2._2).cctor_finished_or_no_cctor == 0) goto label_0387e999;
	label_0387e8cb: ;
			pMVar3 = method.rgctx_data;
			pIVar2 = pMVar3._3_Utility_Util___c__11_T_;
			bVar1 = (pIVar2._2).bitflags1;
		}
		else {
			if ((pIVar2._2).cctor_finished_or_no_cctor != 0) goto label_0387e8cb;
	label_0387e999: ;
			pMVar3 = method.rgctx_data;
			pIVar2 = pMVar3._3_Utility_Util___c__11_T_;
			bVar1 = (pIVar2._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			pMVar3 = method.rgctx_data;
		}
		@object = *(@object*)pIVar2.static_fields;
		pIVar2 = pMVar3._2_System_Predicate_T_;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		match = (Predicate<T>)il2cpp_codegen_object_new(pIVar2);
		match = new Predicate<@object>(@object, (intptr_t)method.rgctx_data._4_Utility_Util___c__11_T___RemoveNullOrDead_b__11_0);
		pIVar2 = method.rgctx_data._3_Utility_Util___c__11_T_;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		*(Predicate<T>*)((long)pIVar2.static_fields + 8) = match;
		pIVar2 = method.rgctx_data._3_Utility_Util___c__11_T_;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
	joined_r0x0387e979: ;
		if (set == null) {
			throw new NullReferenceException();
		}
		set.RemoveWhere(match);
		return set;
	}

	// Utility.Util$$RemoveNullOrDeadDetections<object>: 10 lines keep C-only constructs
	private static HashSet<T> RemoveNullOrDeadDetections_object(HashSet<T> set)
	{
		byte bVar1;
		object @object;
		Il2CppClass pIVar2;
		Predicate<T> match;
		MethodInfo_377E9C0_RGCTXs pMVar3;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pIVar2 = method.rgctx_data._3_Utility_Util___c__12_T_;
			if (((pIVar2._2).bitflags1 & 1) == 0) goto label_0387ea56;
	label_0387e9e4: ;
			if ((pIVar2._2).cctor_finished_or_no_cctor != 0) goto label_0387e9ed;
	label_0387ea67: ;
			pIVar2 = method.rgctx_data._3_Utility_Util___c__12_T_;
			if (((pIVar2._2).bitflags1 & 1) == 0) goto label_0387ea7d;
	label_0387e9fe: ;
			match = *(Predicate<T>*)((long)pIVar2.static_fields + 8);
		}
		else {
			pIVar2 = method.rgctx_data._3_Utility_Util___c__12_T_;
			if (((pIVar2._2).bitflags1 & 1) != 0) goto label_0387e9e4;
	label_0387ea56: ;
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			if ((pIVar2._2).cctor_finished_or_no_cctor == 0) goto label_0387ea67;
	label_0387e9ed: ;
			pIVar2 = method.rgctx_data._3_Utility_Util___c__12_T_;
			if (((pIVar2._2).bitflags1 & 1) != 0) goto label_0387e9fe;
	label_0387ea7d: ;
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			match = *(Predicate<T>*)((long)pIVar2.static_fields + 8);
		}
		if (match != null) goto joined_r0x0387eb69;
		pIVar2 = method.rgctx_data._3_Utility_Util___c__12_T_;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			if ((pIVar2._2).cctor_finished_or_no_cctor == 0) goto label_0387eb89;
	label_0387eabb: ;
			pMVar3 = method.rgctx_data;
			pIVar2 = pMVar3._3_Utility_Util___c__12_T_;
			bVar1 = (pIVar2._2).bitflags1;
		}
		else {
			if ((pIVar2._2).cctor_finished_or_no_cctor != 0) goto label_0387eabb;
	label_0387eb89: ;
			pMVar3 = method.rgctx_data;
			pIVar2 = pMVar3._3_Utility_Util___c__12_T_;
			bVar1 = (pIVar2._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			pMVar3 = method.rgctx_data;
		}
		@object = *(@object*)pIVar2.static_fields;
		pIVar2 = pMVar3._2_System_Predicate_T_;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		match = (Predicate<T>)il2cpp_codegen_object_new(pIVar2);
		match = new Predicate<@object>(@object, (intptr_t)method.rgctx_data._4_Utility_Util___c__12_T___RemoveNullOrDeadDetections_b__12_0);
		pIVar2 = method.rgctx_data._3_Utility_Util___c__12_T_;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		*(Predicate<T>*)((long)pIVar2.static_fields + 8) = match;
		pIVar2 = method.rgctx_data._3_Utility_Util___c__12_T_;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
	joined_r0x0387eb69: ;
		if (set == null) {
			throw new NullReferenceException();
		}
		set.RemoveWhere(match);
		return set;
	}

	// Utility.Util.<>c__10<object>$$.cctor: 15 lines keep C-only constructs
	private static void c__10_object___cctor()
	{
		Il2CppClass pIVar1;
		object __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		*(object*)pIVar1.static_fields = __this;
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		return;
	}

	// Utility.Util.<>c__10<object>$$.ctor: clean
	private void c__10_object___ctor()
	{
		base();
		return;
	}

	// Utility.Util.<>c__10<object>$$<RemoveNull>b__10_0: clean
	private bool c__10_object___RemoveNull_b__10_0(object e)
	{
		bool bVar1;

		bVar1 = ((bool)(Object)e);
		return !bVar1;
	}

	// Utility.Util.<>c__11<object>$$.cctor: 15 lines keep C-only constructs
	private static void c__11_object___cctor()
	{
		Il2CppClass pIVar1;
		object __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		*(object*)pIVar1.static_fields = __this;
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		return;
	}

	// Utility.Util.<>c__11<object>$$.ctor: clean
	private void c__11_object___ctor()
	{
		base();
		return;
	}

	// Utility.Util.<>c__11<object>$$<RemoveNullOrDead>b__11_0: 1 lines keep C-only constructs
	private bool c__11_object___RemoveNullOrDead_b__11_0(object e)
	{
		bool bVar1;
		bool bVar2;

		bVar1 = ((bool)(Object)e);
		if (bVar1) {
			if (e == null) {
				throw new NullReferenceException();
			}
			bVar2 = *(sbyte)&e[7].monitor != false;
		}
		return bVar2;
	}

	// Utility.Util.<>c__12<object>$$.cctor: 15 lines keep C-only constructs
	private static void c__12_object___cctor()
	{
		Il2CppClass pIVar1;
		object __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		*(object*)pIVar1.static_fields = __this;
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		return;
	}

	// Utility.Util.<>c__12<object>$$.ctor: clean
	private void c__12_object___ctor()
	{
		base();
		return;
	}

	// Utility.Util.<>c__12<object>$$<RemoveNullOrDeadDetections>b__12_0: 2 lines keep C-only constructs
	private bool c__12_object___RemoveNullOrDeadDetections_b__12_0(object e)
	{
		Il2CppMethodPointer vtableDispatch;
		byte uVar1;

		if (e == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = e.klass.vtable[5].methodPtr;
		uVar1 = (*vtableDispatch)(e,e.klass.vtable[5].method,method,vtableDispatch);
		return (bool)uVar1;
	}

	// Utility.Util.<>c__33<object, object>$$.cctor: 15 lines keep C-only constructs
	private static void c__33_object_object___cctor()
	{
		Il2CppClass pIVar1;
		object __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		*(object*)pIVar1.static_fields = __this;
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		return;
	}

	// Utility.Util.<>c__33<object, object>$$.ctor: clean
	private void c__33_object_object___ctor()
	{
		base();
		return;
	}

	// Utility.Util.<>c__33<object, object>$$<PaginateDictionary>b__33_0: clean
	private object c__33_object_object___PaginateDictionary_b__33_0(KeyValuePair<TKey, TValue> c)
	{
		return c.key;
	}

	// Utility.Util.<>c__33<object, object>$$<PaginateDictionary>b__33_1: clean
	private object c__33_object_object___PaginateDictionary_b__33_1(KeyValuePair<TKey, TValue> c)
	{
		return c.value;
	}

	// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.cctor: 24 lines keep C-only constructs
	private static void c__33___Il2CppFullySharedGenericType___Il2CppFullySharedGenericType___cctor()
	{
		Il2CppMethodPointer pIVar1;
		Il2CppClass pIVar2;
		object pIVar3;
		Il2CppClass klass;
		ushort uVar4;

		pIVar2 = (Il2CppClass)method.klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		pIVar2 = pIVar2.rgctx_data.klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		pIVar3 = il2cpp_codegen_object_new(pIVar2);
		pIVar2 = (Il2CppClass)method.klass;
		uVar4._0_1_ = (pIVar2._2).bitflags1;
		uVar4._1_1_ = (pIVar2._2).bitflags2;
		if ((uVar4 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			klass = (Il2CppClass)method.klass;
			uVar4._0_1_ = (klass._2).bitflags1;
			uVar4._1_1_ = (klass._2).bitflags2;
		}
		else {
			klass = pIVar2;
		}
		pIVar1 = (pIVar2.rgctx_data[1].method).methodPointer;
		if ((uVar4 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		(*pIVar1)(pIVar3,klass.rgctx_data[1].rgctxDataDummy);
		pIVar2 = (Il2CppClass)method.klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		pIVar2 = pIVar2.rgctx_data[2].klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		*(object*)pIVar2.static_fields = pIVar3;
		pIVar2 = (Il2CppClass)method.klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		pIVar2 = pIVar2.rgctx_data[2].klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		return;
	}

	// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor: clean
	private void c__33___Il2CppFullySharedGenericType___Il2CppFullySharedGenericType___ctor()
	{
		base();
		return;
	}

	// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<PaginateDictionary>b__33_0: 8 lines keep C-only constructs
	private __Il2CppFullySharedGenericType c__33___Il2CppFullySharedGenericType___Il2CppFullySharedGenericType___PaginateDictionary_b__33_0(KeyValuePair<TKey, TValue> c)
	{
		Utility_Util___c__33_TKey__TValue__RGCTXs pUVar1;
		MethodInfo pMVar2;
		Il2CppMethodPointer pIVar3;
		InvokerMethod pIVar4;
		long lVar5;
		IntPtr extraout_RDX;
		IntPtr __src;
		ulong __n;
		__Il2CppFullySharedGenericType UVar6;
		ulong uStack_30;
		IntPtr local_28;

		pUVar1 = method.klass.rgctx_data;
		__n = (ulong)(pUVar1._6_TKey._2).stack_slot_size;
		lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
		__src = (IntPtr)((long)&local_28 + lVar5);
		pMVar2 = pUVar1._4_System_Collections_Generic_KeyValuePair_TKey__TValue__get_Key;
		pIVar3 = pMVar2.methodPointer;
		pIVar4 = pMVar2.invoker_method;
		local_28 = __src;
		*(ulong)((long)&uStack_30 + lVar5) = 0x398a7ec;
		(*pIVar4)(pIVar3,pMVar2,c.key,&local_28,__src);
		*(ulong)((long)&uStack_30 + lVar5) = 0x398a7fa;
		UVar6.klass = memcpy(c.value, __src, __n);
		UVar6.monitor = extraout_RDX;
		return UVar6;
	}

	// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<PaginateDictionary>b__33_1: 8 lines keep C-only constructs
	private __Il2CppFullySharedGenericType c__33___Il2CppFullySharedGenericType___Il2CppFullySharedGenericType___PaginateDictionary_b__33_1(KeyValuePair<TKey, TValue> c)
	{
		Utility_Util___c__33_TKey__TValue__RGCTXs pUVar1;
		MethodInfo pMVar2;
		Il2CppMethodPointer pIVar3;
		InvokerMethod pIVar4;
		long lVar5;
		IntPtr extraout_RDX;
		IntPtr __src;
		ulong __n;
		__Il2CppFullySharedGenericType UVar6;
		ulong uStack_30;
		IntPtr local_28;

		pUVar1 = method.klass.rgctx_data;
		__n = (ulong)(pUVar1._8_TValue._2).stack_slot_size;
		lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
		__src = (IntPtr)((long)&local_28 + lVar5);
		pMVar2 = pUVar1._7_System_Collections_Generic_KeyValuePair_TKey__TValue__get_Value;
		pIVar3 = pMVar2.methodPointer;
		pIVar4 = pMVar2.invoker_method;
		local_28 = __src;
		*(ulong)((long)&uStack_30 + lVar5) = 0x398a85c;
		(*pIVar4)(pIVar3,pMVar2,c.key,&local_28,__src);
		*(ulong)((long)&uStack_30 + lVar5) = 0x398a86a;
		UVar6.klass = memcpy(c.value, __src, __n);
		UVar6.monitor = extraout_RDX;
		return UVar6;
	}

	// Utility.Util$$.cctor: 18 lines keep C-only constructs
	static Util()
	{
		int piVar1;
		uint uVar2;
		uint uVar3;
		System_Collections_Generic_KeyValuePair_float__string__array pSVar4;
		OrdinalIgnoreCaseComparer comparer;
		List<KeyValuePair<float, string>> __this;
		HashSet<string> __this_00;
		System_Collections_Generic_KeyValuePair_float__object__o item;
		System_Collections_Generic_KeyValuePair_float__object__o item_00;
		System_Collections_Generic_KeyValuePair_float__object__o item_01;
		System_Collections_Generic_KeyValuePair_float__object__o SStack_48;
		System_Collections_Generic_KeyValuePair_float__object__o SStack_38;
		System_Collections_Generic_KeyValuePair_float__object__o SStack_28;

		__this = new List<KeyValuePair<float, string>>();
		SStack_28._0_8_ = 0;
		SStack_28.value = null;
		SStack_28 = new KeyValuePair<float, object>(1.0, (Il2CppObject *)"smallTitan");
		if (__this == null) goto label_05df41dd;
		piVar1 = &__this._version;
		*piVar1 = *piVar1 + 1;
		pSVar4 = __this._items;
		if (pSVar4 == null) goto label_05df41dd;
		uVar2 = __this._size;
		if (uVar2 < (uint)pSVar4.Length) {
			__this._size = uVar2 + 1;
			pSVar4[(int)uVar2].key = SStack_28.key;
			pSVar4[(int)uVar2].value = (String)SStack_28.value;
		}
		else {
			item.value = SStack_28.value;
			item._0_8_ = (ulong)(uint)SStack_28.key;
			__this.AddWithResize(item);
		}
		SStack_38._0_8_ = 0;
		SStack_38.value = null;
		SStack_38 = new KeyValuePair<float, object>(2.0, (Il2CppObject *)"avgTitan");
		piVar1 = &__this._version;
		*piVar1 = *piVar1 + 1;
		pSVar4 = __this._items;
		if (pSVar4 == null) goto label_05df41dd;
		uVar2 = __this._size;
		if (uVar2 < (uint)pSVar4.Length) {
			__this._size = uVar2 + 1;
			pSVar4[(int)uVar2].key = SStack_38.key;
			pSVar4[(int)uVar2].value = (String)SStack_38.value;
		}
		else {
			item_00.value = SStack_38.value;
			item_00._0_8_ = (ulong)(uint)SStack_38.key;
			__this.AddWithResize(item_00);
		}
		SStack_48._0_8_ = 0;
		SStack_48.value = null;
		SStack_48 = new KeyValuePair<float, object>(2.75, (Il2CppObject *)"maxTitan");
		piVar1 = &__this._version;
		*piVar1 = *piVar1 + 1;
		pSVar4 = __this._items;
		if (pSVar4 == null) goto label_05df41dd;
		uVar2 = __this._size;
		if (uVar2 < (uint)pSVar4.Length) {
			__this._size = uVar2 + 1;
			pSVar4[(int)uVar2].key = SStack_48.key;
			pSVar4[(int)uVar2].value = (String)SStack_48.value;
		}
		else {
			item_01.value = SStack_48.value;
			item_01._0_8_ = (ulong)(uint)SStack_48.key;
			__this.AddWithResize(item_01);
		}
		Util._agentSizes = __this;
		if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07542886 != false) goto label_05df3f57;
	label_05df41ad: ;
			g_data_07542886 = true;
			uVar3 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_07542886 == false) goto label_05df41ad;
	label_05df3f57: ;
			uVar3 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_00 = new HashSet<string>((IEqualityComparer<T>)comparer);
		if (__this_00 != null) {
			__this_00.Add((Il2CppObject *)"CON");
			__this_00.Add((Il2CppObject *)"PRN");
			__this_00.Add((Il2CppObject *)"AUX");
			__this_00.Add((Il2CppObject *)"NUL");
			__this_00.Add((Il2CppObject *)"COM1");
			__this_00.Add((Il2CppObject *)"COM2");
			__this_00.Add((Il2CppObject *)"COM3");
			__this_00.Add((Il2CppObject *)"COM4");
			__this_00.Add((Il2CppObject *)"COM5");
			__this_00.Add((Il2CppObject *)"COM6");
			__this_00.Add((Il2CppObject *)"COM7");
			__this_00.Add((Il2CppObject *)"COM8");
			__this_00.Add((Il2CppObject *)"COM9");
			__this_00.Add((Il2CppObject *)"LPT1");
			__this_00.Add((Il2CppObject *)"LPT2");
			__this_00.Add((Il2CppObject *)"LPT3");
			__this_00.Add((Il2CppObject *)"LPT4");
			__this_00.Add((Il2CppObject *)"LPT5");
			__this_00.Add((Il2CppObject *)"LPT6");
			__this_00.Add((Il2CppObject *)"LPT7");
			__this_00.Add((Il2CppObject *)"LPT8");
			__this_00.Add((Il2CppObject *)"LPT9");
			Util.ReservedFileNames = __this_00;
			return;
		}
	label_05df41dd: ;
		throw new NullReferenceException();
	}

	// Utility.Util.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new Util.c();
		Util.c.__9 = (Util.c)__this;
		return;
	}

	// Utility.Util.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Utility.Util.<>c$$<PascalToSentence>b__7_0: clean
	private String c__PascalToSentence_b__7_0(Match m)
	{
		ushort c;
		String pSVar1;
		object arg0;
		object arg1;
		ushort local_1c;
		ushort local_1a;

		if (m != null) {
			pSVar1 = m.Value;
			if (pSVar1 != null) {
				local_1a = pSVar1.get_Chars(0);
				arg0 = (object)local_1a;
				pSVar1 = m.Value;
				if (pSVar1 != null) {
					c = pSVar1.get_Chars(1);
					local_1c = Char.ToLower(c);
					arg1 = (object)local_1c;
					pSVar1 = String.Format("{0} {1}", arg0, arg1);
					return pSVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Utility.Util.<>c$$<RemoveNullOrDeadShifters>b__13_0: clean
	private bool c__RemoveNullOrDeadShifters_b__13_0(BaseShifter e)
	{
		bool bVar1;
		bool bVar2;

		bVar1 = ((bool)(Object)e);
		if (bVar1) {
			if (e == null) {
				throw new NullReferenceException();
			}
			if (e.Dead == false) {
				return false;
			}
			bVar2 = e.TransformingToHuman == false;
		}
		return bVar2;
	}

	// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_0: clean
	private Nullable<int> c__GetAllTitanAgentIds_b__41_0(System_Collections_Generic_KeyValuePair_float__string__o agentSize)
	{
		uint uVar1;
		Nullable<int> SVar2;
		MethodInfo name;

		name = (MethodInfo)agentSize.value;
		if (Il2CppMethodInitialized_07548313 == false) {
			Il2CppMethodInitialized_07548313 = true;
			uVar1 = (typeof(Util)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Util)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			SVar2 = Util.GetNavMeshAgentID((String)name);
			return (Nullable<int>)SVar2;
		}
		SVar2 = Util.GetNavMeshAgentID((String)name);
		return (Nullable<int>)SVar2;
	}

	// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_1: clean
	private bool c__GetAllTitanAgentIds_b__41_1(Nullable<int> agentId)
	{
		return agentId.hasValue != false;
	}

	// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_2: clean
	private int c__GetAllTitanAgentIds_b__41_2(Nullable<int> agentId)
	{
		int iVar1;
		Nullable<int> SStack_8;

		SStack_8 = agentId;
		return iVar1;
	}
}
