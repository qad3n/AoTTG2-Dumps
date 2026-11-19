// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.SnapshotManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/SnapshotManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/SnapshotManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000988")]
internal class SnapshotManager : MonoBehaviour
{
	[Token(Token = "0x4003030")]
	[FieldOffset(Offset = "0x0")]
	private static SnapshotManager _instance;

	[Token(Token = "0x4003031")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string SnapshotPath;

	[Token(Token = "0x4003032")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string SnapshotTempPath;

	[Token(Token = "0x4003033")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string SnapshotFilePrefix;

	[Token(Token = "0x4003034")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int MaxSnapshots;

	[Token(Token = "0x4003035")]
	[FieldOffset(Offset = "0x24")]
	private static int _currentSnapshotSaveId;

	[Token(Token = "0x4003036")]
	[FieldOffset(Offset = "0x28")]
	private static int _maxSnapshotSaveId;

	[Token(Token = "0x4003037")]
	[FieldOffset(Offset = "0x30")]
	private static int[] _damages;

	[Token(Token = "0x6005918")]
	[Address(RVA = "0x5D08DD0", Offset = "0x5D07DD0", VA = "0x5D08DD0")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/SnapshotManager.c (ApplicationManagers.SnapshotManager$$Init): clean
		SnapshotManager pAVar1;

		pAVar1 = SingletonFactory.CreateSingleton<SnapshotManager>((object)SnapshotManager._instance);
		SnapshotManager._instance = pAVar1;
		SnapshotManager.ClearTemp();
		return;
	}

	[Token(Token = "0x6005919")]
	[Address(RVA = "0x5D1DA20", Offset = "0x5D1CA20", VA = "0x5D1DA20")]
	private void OnApplicationQuit()
	{
		// Lifted from source/cpp/ApplicationManagers/SnapshotManager.c (ApplicationManagers.SnapshotManager$$OnApplicationQuit): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07548481 == false) {
			Il2CppMethodInitialized_07548481 = true;
			uVar1 = (typeof(SnapshotManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(SnapshotManager);
		}
		else {
			uVar1 = (typeof(SnapshotManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(SnapshotManager);
		}
		typeof(SnapshotManager) = (SnapshotManager)klass;
		if (uVar1 == 0) {
			SnapshotManager.ClearTemp();
			return;
		}
		SnapshotManager.ClearTemp();
		return;
	}

	[Token(Token = "0x600591A")]
	[Address(RVA = "0x5D1D8C0", Offset = "0x5D1C8C0", VA = "0x5D1D8C0")]
	private static void ClearTemp()
	{
		// Lifted from source/cpp/ApplicationManagers/SnapshotManager.c (ApplicationManagers.SnapshotManager$$ClearTemp): clean
		bool bVar1;

		bVar1 = Directory.Exists(SnapshotManager.SnapshotTempPath);
		if (bVar1) {
			Directory.Delete(SnapshotManager.SnapshotTempPath, true);
		}
		return;
	}

	[Token(Token = "0x600591B")]
	[Address(RVA = "0x5D1DA80", Offset = "0x5D1CA80", VA = "0x5D1DA80")]
	private static string GetFileName(int snapshotId)
	{
		// Lifted from source/cpp/ApplicationManagers/SnapshotManager.c (ApplicationManagers.SnapshotManager$$GetFileName): clean
		String str1;
		String pSVar1;
		int local_c;

		local_c = snapshotId;
		pSVar1 = SnapshotManager.SnapshotFilePrefix;
		str1 = local_c.ToString();
		pSVar1 = String.Concat(pSVar1, str1);
		return pSVar1;
	}

	[Token(Token = "0x600591C")]
	[Address(RVA = "0x5D1DAF0", Offset = "0x5D1CAF0", VA = "0x5D1DAF0")]
	public static void AddSnapshot(Texture2D texture, int damage)
	{
		// Lifted from source/cpp/ApplicationManagers/SnapshotManager.c (ApplicationManagers.SnapshotManager$$AddSnapshot): 3 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Int32[] pSVar3;
		SnapshotManager klass;
		bool bVar4;
		int iVar5;
		String str1;
		String pSVar6;
		String pSVar7;
		Byte[] bytes;
		ApplicationManagers_SnapshotManager_StaticFields pAVar8;
		MethodInfo method_00;
		int local_3c;
		int local_38;
		int iStack_34;

		bVar4 = Directory.Exists(SnapshotManager.SnapshotTempPath);
		if (!bVar4) {
			Directory.CreateDirectory(SnapshotManager.SnapshotTempPath);
		}
		pSVar7 = SnapshotManager.SnapshotTempPath;
		local_3c = SnapshotManager._currentSnapshotSaveId;
		pSVar6 = SnapshotManager.SnapshotFilePrefix;
		str1 = local_3c.ToString();
		pSVar6 = String.Concat(pSVar6, str1);
		method_00 = (MethodInfo *)"/";
		pSVar7 = String.Concat(pSVar7, "/", pSVar6);
		bytes = SnapshotManager.SerializeSnapshot(texture);
		File.WriteAllBytes(pSVar7, bytes);
		pAVar8 = typeof(SnapshotManager).static_fields;
		pSVar3 = pAVar8._damages;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		if ((uint)pSVar3.Length <= (uint)pAVar8._currentSnapshotSaveId) {
			throw new IndexOutOfRangeException();
		}
		pSVar3[pAVar8._currentSnapshotSaveId] = damage;
		uVar1 = pAVar8._currentSnapshotSaveId;
		uVar2 = pAVar8._maxSnapshotSaveId;
		local_38 = uVar1 + 1;
		iStack_34 = uVar2 + 1;
		pAVar8._currentSnapshotSaveId = local_38;
		pAVar8._maxSnapshotSaveId = iStack_34;
		iVar5 = pAVar8.MaxSnapshots;
		iVar5 = Math.Min(iStack_34, iVar5);
		klass = typeof(SnapshotManager);
		pAVar8 = typeof(SnapshotManager).static_fields;
		pAVar8._maxSnapshotSaveId = iVar5;
		if (pAVar8.MaxSnapshots <= pAVar8._currentSnapshotSaveId) {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				pAVar8 = typeof(SnapshotManager).static_fields;
			}
			pAVar8._currentSnapshotSaveId = 0;
		}
		return;
	}

	[Token(Token = "0x600591D")]
	[Address(RVA = "0x5D1DDF0", Offset = "0x5D1CDF0", VA = "0x5D1DDF0")]
	private static byte[] SerializeSnapshot(Texture2D texture)
	{
		// Lifted from source/cpp/ApplicationManagers/SnapshotManager.c (ApplicationManagers.SnapshotManager$$SerializeSnapshot): clean
		_struct_53536 _Var1;
		uint uVar2;
		int iVar3;
		Color32[] pUVar4;
		Byte[] pSVar5;
		Byte[] pSVar6;
		int iVar7;
		ulong uVar8;
		ulong uVar9;
		uint uVar10;
		ulong uVar11;

		if ((texture != null) &&(pUVar4 = texture.GetPixels32(), pUVar4 != null)) {
			pSVar5 = (Byte[])new byte[(int)pUVar4.Length * 3 + 8];
			iVar3 = texture.get_width();
			pSVar6 = BitConverter.GetBytes(iVar3);
			if (pSVar6 != null) {
				iVar7 = (int)pSVar6.Length;
				if (pSVar5 == null) {
					uVar11 = 0;
					if (0 < iVar7) goto label_05e1df68;
				}
				else if (iVar7 < 1) {
					uVar11 = 0;
				}
				else {
					uVar8 = pSVar6.Length & 0xffffffff;
					uVar11 = 0;
					do {
						if ((uVar8 <= uVar11) || ((uint)pSVar5.Length <= uVar11)) goto label_05e1dfeb;
						pSVar5[uVar11] = pSVar6[uVar11];
						uVar11 = uVar11 + 1;
						uVar10 = (uint)pSVar6.Length;
						uVar8 = (ulong)uVar10;
					} while ((long)uVar11 < (long)(int)uVar10);
				}
				iVar3 = texture.get_height();
				pSVar6 = BitConverter.GetBytes(iVar3);
				if (pSVar6 != null) {
					iVar7 = (int)pSVar6.Length;
					if (pSVar5 != null) {
						if (iVar7 < 1) {
							uVar8 = pUVar4.Length;
							if ((int)uVar8 < 1) {
								return pSVar5;
							}
						}
						else {
							uVar8 = pSVar6.Length & 0xffffffff;
							uVar9 = 0;
							do {
								if ((uVar8 <= uVar9) || (uVar10 = (int)uVar11 + (int)uVar9, (uint)pSVar5.Length <= uVar10)) goto label_05e1dfeb;
								pSVar5[(int)uVar10] = pSVar6[uVar9];
								uVar9 = uVar9 + 1;
								uVar10 = (uint)pSVar6.Length;
								uVar8 = (ulong)uVar10;
							} while ((long)uVar9 < (long)(int)uVar10);
							uVar8 = pUVar4.Length;
							if ((int)uVar8 < 1) {
								return pSVar5;
							}
							if (pSVar5 == null) goto label_05e1df68;
							uVar11 = (uVar11 & 0xffffffff) + uVar9;
						}
						uVar8 = uVar8 & 0xffffffff;
						uVar9 = 0;
						while ((uVar9 < uVar8 && (uVar10 = (uint)uVar11, uVar10 < (uint)pSVar5.Length))) {
							_Var1 = pUVar4[uVar9]._overlap_0._at_a;
							pSVar5[(int)uVar10] = _Var1._lead[0];
							if (((uint)pSVar5.Length <= uVar10 + 1) ||(pSVar5[(int)(uVar10 + 1)] = _Var1._lead[1], (uint)pSVar5.Length <= uVar10 + 2)) break;
							pSVar5[(int)(uVar10 + 2)] = _Var1._lead[2];
							uVar9 = uVar9 + 1;
							uVar2 = (uint)pUVar4.Length;
							uVar8 = (ulong)uVar2;
							uVar11 = (ulong)(uVar10 + 3);
							if ((long)(int)uVar2 <= (long)uVar9) {
								return pSVar5;
							}
						}
	label_05e1dfeb: ;
						throw new IndexOutOfRangeException();
					}
					if ((iVar7 < 1) && ((int)pUVar4.Length < 1)) {
						return null;
					}
				}
			}
		}
	label_05e1df68: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600591E")]
	[Address(RVA = "0x5D1DFF0", Offset = "0x5D1CFF0", VA = "0x5D1DFF0")]
	private static Texture2D DeserializeSnapshot(byte[] bytes)
	{
		// Lifted from source/cpp/ApplicationManagers/SnapshotManager.c (ApplicationManagers.SnapshotManager$$DeserializeSnapshot): clean
		uint uVar1;
		int width;
		int height;
		Texture2D __this;
		Color32[] colors;
		uint uVar2;
		ulong uVar3;
		ulong uVar4;

		width = BitConverter.ToInt32(bytes, 0);
		height = BitConverter.ToInt32(bytes, 4);
		__this = new Texture2D(width, height, 3, false);
		if (bytes != null) {
			colors = (Color32[])new Color32[((int)bytes.Length + -8) / 3];
			if (colors != null) {
				if (0 < (int)colors.Length) {
					uVar4 = colors.Length & 0xffffffff;
					uVar2 = 10;
					uVar3 = 0;
					do {
						uVar1 = (uint)bytes.Length;
						if ((((uVar1 <= uVar2 - 2) || (uVar1 <= uVar2 - 1)) || (uVar1 <= uVar2)) || (uVar4 <= uVar3)) {
							throw new IndexOutOfRangeException();
						}
						colors[uVar3]._overlap_0._at_rgba.rgba =(uint)bytes[(int)(uVar2 - 1)] << 8 |(uint)bytes[(int)uVar2] << 0x10 | (uint)bytes[(int)(uVar2 - 2)] | 0xff000000;
						uVar3 = uVar3 + 1;
						uVar1 = (uint)colors.Length;
						uVar4 = (ulong)uVar1;
						uVar2 = uVar2 + 3;
					} while ((long)uVar3 < (long)(int)uVar1);
				}
				if (__this != null) {
					__this.SetPixels32(colors);
					__this.Apply();
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600591F")]
	[Address(RVA = "0x5D1E160", Offset = "0x5D1D160", VA = "0x5D1E160")]
	public static void SaveSnapshotFinish(Texture2D texture, string fileName)
	{
		// Lifted from source/cpp/ApplicationManagers/SnapshotManager.c (ApplicationManagers.SnapshotManager$$SaveSnapshotFinish): clean
		bool bVar1;
		String path;
		Byte[] bytes;

		bVar1 = Directory.Exists(SnapshotManager.SnapshotPath);
		if (!bVar1) {
			Directory.CreateDirectory(SnapshotManager.SnapshotPath);
		}
		path = String.Concat(SnapshotManager.SnapshotPath, "/", fileName);
		bytes = ImageConversion.EncodeToPNG(texture);
		File.WriteAllBytes(path, bytes);
		return;
	}

	[Token(Token = "0x6005920")]
	[Address(RVA = "0x5D1E240", Offset = "0x5D1D240", VA = "0x5D1E240")]
	public static int GetDamage(int index)
	{
		// Lifted from source/cpp/ApplicationManagers/SnapshotManager.c (ApplicationManagers.SnapshotManager$$GetDamage): clean
		uint uVar1;
		int iVar2;
		Int32[] pSVar3;
		ApplicationManagers_SnapshotManager_StaticFields pAVar4;

		if (Il2CppMethodInitialized_07548488 == false) {
			Il2CppMethodInitialized_07548488 = true;
			uVar1 = (typeof(SnapshotManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(SnapshotManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pAVar4 = typeof(SnapshotManager).static_fields;
			iVar2 = pAVar4._maxSnapshotSaveId;
		}
		else {
			pAVar4 = (typeof(SnapshotManager)).static_fields;
			iVar2 = pAVar4._maxSnapshotSaveId;
		}
		if (iVar2 <= index) {
			return 0;
		}
		if (((typeof(SnapshotManager))._2).cctor_finished_or_no_cctor == 0) {
			pAVar4 = typeof(SnapshotManager).static_fields;
		}
		pSVar3 = pAVar4._damages;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		if ((uint)pSVar3.Length <= (uint)index) {
			throw new IndexOutOfRangeException();
		}
		return pSVar3[index];
	}

	[Token(Token = "0x6005921")]
	[Address(RVA = "0x5D1E300", Offset = "0x5D1D300", VA = "0x5D1E300")]
	public static Texture2D GetSnapshot(int index)
	{
		// Lifted from source/cpp/ApplicationManagers/SnapshotManager.c (ApplicationManagers.SnapshotManager$$GetSnapshot): 4 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		ApplicationManagers_SnapshotManager_StaticFields pAVar3;
		bool bVar4;
		uint in_EAX;
		String str1;
		String pSVar5;
		String pSVar6;
		Texture2D pUVar7;
		ulong uStack_28;

		uStack_28._0_4_ = in_EAX;
		if (Il2CppMethodInitialized_07548489 == false) {
			Il2CppMethodInitialized_07548489 = true;
			uVar1 = (typeof(SnapshotManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(SnapshotManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pAVar3 = typeof(SnapshotManager).static_fields;
			iVar2 = pAVar3._maxSnapshotSaveId;
		}
		else {
			pAVar3 = (typeof(SnapshotManager)).static_fields;
			iVar2 = pAVar3._maxSnapshotSaveId;
		}
		if (iVar2 <= index) {
			return null;
		}
		if (((typeof(SnapshotManager))._2).cctor_finished_or_no_cctor == 0) {
			pSVar6 = SnapshotManager.SnapshotTempPath;
		}
		else {
			pSVar6 = pAVar3.SnapshotTempPath;
		}
		uStack_28 = CONCAT44(index, (undefined4)uStack_28);
		if (Il2CppMethodInitialized_07548483 == false) {
			Il2CppMethodInitialized_07548483 = true;
			uVar1 = (typeof(SnapshotManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(SnapshotManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar5 = SnapshotManager.SnapshotFilePrefix;
		str1 = (((long)&uStack_28 + 4)).ToString();
		pSVar5 = String.Concat(pSVar5, str1);
		pSVar6 = String.Concat(pSVar6, "/", pSVar5);
		bVar4 = File.Exists(pSVar6);
		if (bVar4) {
		}
		return pUVar7;
	}

	[Token(Token = "0x6005922")]
	[Address(RVA = "0x5D1E4A0", Offset = "0x5D1D4A0", VA = "0x5D1E4A0")]
	public static int GetLength()
	{
		// Lifted from source/cpp/ApplicationManagers/SnapshotManager.c (ApplicationManagers.SnapshotManager$$GetLength): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754848a == false) {
			Il2CppMethodInitialized_0754848a = true;
			uVar1 = (typeof(SnapshotManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(SnapshotManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return SnapshotManager._maxSnapshotSaveId;
		}
		return *(int)((long)(typeof(SnapshotManager)).static_fields + 0x28);
	}

	[Token(Token = "0x6005923")]
	[Address(RVA = "0x5D1E510", Offset = "0x5D1D510", VA = "0x5D1E510")]
	public SnapshotManager()
	{
		// Lifted from source/cpp/ApplicationManagers/SnapshotManager.c (ApplicationManagers.SnapshotManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/SnapshotManager.c.

	// ApplicationManagers.SnapshotManager$$.cctor: clean
	static SnapshotManager()
	{
		ApplicationManagers_SnapshotManager_StaticFields pAVar1;
		String pSVar2;
		Int32[] pSVar3;

		pAVar1 = typeof(SnapshotManager).static_fields;
		pAVar1.SnapshotPath = FolderPaths.Snapshots;
		pSVar2 = String.Concat(FolderPaths.Snapshots, "/Temp");
		pAVar1 = typeof(SnapshotManager).static_fields;
		pAVar1.SnapshotTempPath = pSVar2;
		pAVar1 = typeof(SnapshotManager).static_fields;
		pAVar1.SnapshotFilePrefix = "Snapshot";
		pAVar1 = typeof(SnapshotManager).static_fields;
		pAVar1.MaxSnapshots = 500;
		pAVar1._currentSnapshotSaveId = 0;
		pAVar1._maxSnapshotSaveId = 0;
		pSVar3 = (Int32[])new int[500];
		pAVar1 = typeof(SnapshotManager).static_fields;
		pAVar1._damages = pSVar3;
		return;
	}
}
