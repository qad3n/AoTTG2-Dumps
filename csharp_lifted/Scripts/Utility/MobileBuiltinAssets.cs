// ==================== AoTTG2 cross-reference ====================
// Type: Utility.MobileBuiltinAssets
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Utility/MobileBuiltinAssets.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.IO;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000909")]
internal static class MobileBuiltinAssets
{
	[Token(Token = "0x4002DB4")]
	private const string PackageSeparator = "!/";

	[Token(Token = "0x4002DB5")]
	private const string UnityDataFolder = "bin/";

	[Token(Token = "0x17000EE8")]
	private static string CacheRoot
	{
		[Token(Token = "0x60055D7")]
		[Address(RVA = "0x5CDE9E0", Offset = "0x5CDD9E0", VA = "0x5CDE9E0")]
		get
		{
			// Lifted from source/cpp/Utility/MobileBuiltinAssets.c (Utility.MobileBuiltinAssets$$get_CacheRoot): clean
			String pSVar1;

			pSVar1 = Application.persistentDataPath;
			pSVar1 = Path.Combine(pSVar1, "Builtin");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000EE9")]
	internal static string CachePath
	{
		[Token(Token = "0x60055D8")]
		[Address(RVA = "0x5CDEA70", Offset = "0x5CDDA70", VA = "0x5CDEA70")]
		get
		{
			// Lifted from source/cpp/Utility/MobileBuiltinAssets.c (Utility.MobileBuiltinAssets$$get_CachePath): 2 lines keep C-only constructs
			String pSVar1;
			String path2;
			Path* ppSVar2;

			if (Il2CppMethodInitialized_0754826e == false) {
				ppSVar2 = &typeof(Path);
				Il2CppMethodInitialized_0754826e = true;
			}
			pSVar1 = MobileBuiltinAssets.CacheRoot;
			path2 = Application.buildGUID;
			pSVar1 = Path.Combine(pSVar1, path2);
			return pSVar1;
		}
	}

	[Token(Token = "0x60055D9")]
	[Address(RVA = "0x5CDEB00", Offset = "0x5CDDB00", VA = "0x5CDEB00")]
	internal static void Prepare()
	{
		// Lifted from source/cpp/Utility/MobileBuiltinAssets.c (Utility.MobileBuiltinAssets$$Prepare): 2 lines keep C-only constructs
		String source;
		String targetRoot;
		Application* ppUVar1;

		if (g_data_0754826f == false) {
			ppUVar1 = &typeof(Application);
			g_data_0754826f = true;
		}
		MobileBuiltinAssets.DeleteStaleCaches();
		source = Application.streamingAssetsPath;
		targetRoot = MobileBuiltinAssets.CachePath;
		MobileBuiltinAssets.Extract(source, targetRoot);
		return;
	}

	[Token(Token = "0x60055DA")]
	[Address(RVA = "0x5CDEB60", Offset = "0x5CDDB60", VA = "0x5CDEB60")]
	private static void DeleteStaleCaches()
	{
		// Lifted from source/cpp/Utility/MobileBuiltinAssets.c (Utility.MobileBuiltinAssets$$DeleteStaleCaches): 2 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		MethodInfo method_00;
		String pSVar3;
		String[] pSVar4;
		ulong uVar5;
		String a;
		String b;
		Path* ppSVar6;
		ulong uVar7;

		if (Il2CppMethodInitialized_07548270 == false) {
			ppSVar6 = &typeof(Path);
			Il2CppMethodInitialized_07548270 = true;
		}
		method_00 = (MethodInfo)MobileBuiltinAssets.CacheRoot;
		bVar2 = Directory.Exists((String)method_00);
		if (bVar2) {
			pSVar3 = MobileBuiltinAssets.CacheRoot;
			pSVar4 = Directory.GetDirectories(pSVar3);
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar4.Length) {
				uVar5 = pSVar4.Length & 0xffffffff;
				uVar7 = 0;
				do {
					if (uVar5 <= uVar7) {
						throw new IndexOutOfRangeException();
					}
					pSVar3 = pSVar4[uVar7];
					a = Path.GetFileName(pSVar3);
					b = Application.buildGUID;
					bVar2 = (a == b);
					if (!bVar2) {
						Directory.Delete(pSVar3, true);
					}
					uVar7 = uVar7 + 1;
					uVar1 = (uint)pSVar4.Length;
					uVar5 = (ulong)uVar1;
				} while ((long)uVar7 < (long)(int)uVar1);
			}
		}
		return;
	}

	[Token(Token = "0x60055DB")]
	[Address(RVA = "0x5CDED80", Offset = "0x5CDDD80", VA = "0x5CDED80")]
	internal static void Extract(string source, string targetRoot)
	{
		// Lifted from source/cpp/Utility/MobileBuiltinAssets.c (Utility.MobileBuiltinAssets$$Extract): 1 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		String pSVar3;
		Uri __this;
		String pSVar4;
		String* method_00;
		Uri local_38;

		local_38 = null;
		if (source != null) {
			iVar2 = source.IndexOf("!/", 4);
			bVar1 = source.StartsWith("jar:", 4);
			if ((!bVar1) || (iVar2 < 0)) {
				bVar1 = Uri.TryCreate(source, 1, ref local_38);
				if (bVar1) {
					if (local_38 == null) goto label_05ddef49;
					bVar1 = local_38.IsFile;
					if (bVar1) {
						if (local_38 == null) goto label_05ddef49;
						source = local_38.LocalPath;
					}
				}
				MobileBuiltinAssets.ExtractDirectory(source, targetRoot);
				return;
			}
			pSVar3 = source.Substring(4, iVar2 + -4);
			__this = new Uri(pSVar3);
			if (__this != null) {
				pSVar3 = __this.LocalPath;
				if ("!/" != null) {
					pSVar4 = source.Substring(iVar2 + ("!/".fields)._stringLength);
					if (pSVar4 != null) {
						pSVar4 = pSVar4.TrimEnd(0x2f);
						method_00 = &"/";
						pSVar4 = String.Concat(pSVar4, "/");
						MobileBuiltinAssets.ExtractPackage(pSVar3, pSVar4, targetRoot);
						return;
					}
				}
			}
		}
	label_05ddef49: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055DC")]
	[Address(RVA = "0x5CDEF50", Offset = "0x5CDDF50", VA = "0x5CDEF50")]
	private static void ExtractPackage(string package, string prefix, string targetRoot)
	{
		// Lifted from source/cpp/Utility/MobileBuiltinAssets.c (Utility.MobileBuiltinAssets$$ExtractPackage): 14 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		ZipArchive pSVar3;
		FileStream pSVar4;
		sbyte cVar5;
		bool bVar6;
		FileStream pSVar7;
		ZipArchive pSVar8;
		ReadOnlyCollection<ZipArchiveEntry> __this;
		object pIVar9;
		VirtualInvokeData pVVar10;
		object @object;
		String __this_00;
		Func<Stream> __this_01;
		ulong uVar11;
		long lVar12;
		object pIStack_80;
		ZipArchive pSStack_78;
		FileStream pSStack_70;
		String pSStack_68;
		@object* ppIStack_58;
		ZipArchive* ppSStack_48;
		FileStream* ppSStack_38;

		pSStack_68 = targetRoot;
		pSStack_78 = null;
		pIStack_80 = null;
		pSVar7 = File.OpenRead(package);
		ppSStack_38 = &pSStack_70;
		pSStack_70 = pSVar7;
		pSVar8 = new ZipArchive((Stream)pSVar7, 0);
		ppSStack_48 = &pSStack_78;
		pSStack_78 = pSVar8;
		if (pSVar8 == null) {
			throw new NullReferenceException();
		}
		__this = pSVar8.Entries;
		if (__this == null) {
			throw new NullReferenceException();
		}
		pIVar9 = (object)__this.GetEnumerator();
		ppIStack_58 = &pIStack_80;
		do {
			pIStack_80 = pIVar9;
			if (pIVar9 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = pIVar9.klass;
			uVar11 = (ulong)(pIVar1._2).interface_offsets_count;
			cVar5 = pIVar9.Dispose();
			pIVar9 = pIStack_80;
			if (cVar5 == false) {
				if (pIStack_80 == null) goto label_05ddf306;
				pIVar1 = pIStack_80.klass;
				uVar11 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar11 == 0) goto label_05ddf2df;
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar12 = 0;
				break;
			}
			if (pIStack_80 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = pIStack_80.klass;
			uVar11 = (ulong)(pIVar1._2).interface_offsets_count;
			@object = pIVar9.Dispose();
			if (@object == null) {
				throw new NullReferenceException();
			}
			if (@object[9].monitor == null) {
				throw new NullReferenceException();
			}
			bVar6 = @object[9].monitor.StartsWith(prefix, 4);
			pIVar9 = pIStack_80;
			if (bVar6) {
				if (@object[9].monitor == null) {
					throw new NullReferenceException();
				}
				bVar6 = @object[9].monitor.EndsWith("/", 4);
				pIVar9 = pIStack_80;
				if (!bVar6) {
					if (prefix == null) {
						throw new NullReferenceException();
					}
					if (@object[9].monitor == null) {
						throw new NullReferenceException();
					}
					__this_00 = @object[9].monitor.Substring(prefix._stringLength);
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					bVar6 = __this_00.StartsWith("bin/", 4);
					pIVar9 = pIStack_80;
					if (!bVar6) {
						__this_01 = new Func<Stream>(@object, (intptr_t)MethodInfo_System_IO_Compression_ZipArchiveEntry_Open);
						MobileBuiltinAssets.CopyIfMissing(__this_00, pSStack_68, __this_01);
						pIVar9 = pIStack_80;
					}
				}
			}
		} while(true);
		while (true) {
			lVar12 = lVar12 + 0x10;
			if (!(uVar11 * 0x10 != lVar12)) break;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar12) == typeof(IDisposable)) {
				pVVar10 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar12);
				goto label_05ddf2fd;
			}
		}
	label_05ddf2df: ;
	label_05ddf2fd: ;
		pIVar9.Dispose();
	label_05ddf306: ;
		pSVar8 = pSStack_78;
		if (pSStack_78 != null) {
			pSVar3 = pSStack_78.klass;
			uVar11 = (ulong)(pSVar3._2).interface_offsets_count;
			pSVar8.Dispose();
		}
		pSVar7 = pSStack_70;
		if (pSStack_70 != null) {
			pSVar4 = pSStack_70.klass;
			uVar11 = (ulong)(pSVar4._2).interface_offsets_count;
			pSVar7.Dispose();
		}
		return;
	}

	[Token(Token = "0x60055DD")]
	[Address(RVA = "0x5CDF540", Offset = "0x5CDE540", VA = "0x5CDF540")]
	private static void ExtractDirectory(string source, string targetRoot)
	{
		// Lifted from source/cpp/Utility/MobileBuiltinAssets.c (Utility.MobileBuiltinAssets$$ExtractDirectory): 1 lines keep C-only constructs
		int iVar1;
		bool bVar2;
		String[] pSVar3;
		Func<Stream> __this;
		MobileBuiltinAssets.c__DisplayClass10_0 pUVar4;
		String pSVar5;
		Char[] trimChars;
		ulong uVar6;

		bVar2 = Directory.Exists(source);
		if (bVar2) {
			pSVar3 = Directory.GetFiles(source, "*", 1);
			if (pSVar3 == null) {
	label_05ddf751: ;
				throw new NullReferenceException();
			}
			iVar1 = (int)pSVar3.Length;
			if (source == null) {
				if (0 < iVar1) {
					uVar6 = 0;
					do {
						pUVar4 = new MobileBuiltinAssets.c__DisplayClass10_0();
						if ((uint)pSVar3.Length <= uVar6) goto label_05ddf7e1;
						if (pUVar4 == null) goto label_05ddf751;
						pUVar4.file = pSVar3[uVar6];
						pSVar5 = pUVar4.file;
						if (pSVar5 == null) goto label_05ddf751;
						bVar2 = pSVar5.EndsWith(".meta", 5);
						if (!bVar2) goto label_05ddf751;
						uVar6 = uVar6 + 1;
					} while ((long)uVar6 < (long)(int)pSVar3.Length);
				}
			}
			else if (0 < iVar1) {
				uVar6 = 0;
				do {
					pUVar4 = new MobileBuiltinAssets.c__DisplayClass10_0();
					if ((uint)pSVar3.Length <= uVar6) {
	label_05ddf7e1: ;
						throw new IndexOutOfRangeException();
					}
					if (pUVar4 == null) goto label_05ddf751;
					pUVar4.file = pSVar3[uVar6];
					pSVar5 = pUVar4.file;
					if (pSVar5 == null) goto label_05ddf751;
					bVar2 = pSVar5.EndsWith(".meta", 5);
					if (!bVar2) {
						pSVar5 = pUVar4.file;
						if (pSVar5 == null) goto label_05ddf751;
						pSVar5 = pSVar5.Substring(source._stringLength);
						trimChars = (Char[])new char[2];
						if (trimChars == null) goto label_05ddf751;
						iVar1 = (int)trimChars.Length;
						if ((iVar1 == 0) || (trimChars[0] = 0x2f, iVar1 == 1)) goto label_05ddf7e1;
						trimChars[1] = 0x5c;
						if (pSVar5 == null) goto label_05ddf751;
						pSVar5 = pSVar5.TrimStart(trimChars);
						if (pSVar5 == null) goto label_05ddf751;
						pSVar5 = pSVar5.Replace(0x5c, 0x2f);
						__this = new Func<Stream>((object)pUVar4, (intptr_t) MethodInfo_Utility_MobileBuiltinAssets_c__DisplayClass10_0_ExtractDirectory_b__0);
						MobileBuiltinAssets.CopyIfMissing(pSVar5, targetRoot, __this);
					}
					uVar6 = uVar6 + 1;
				} while ((long)uVar6 < (long)(int)pSVar3.Length);
			}
		}
		return;
	}

	[Token(Token = "0x60055DE")]
	[Address(RVA = "0x5CDF7F0", Offset = "0x5CDE7F0", VA = "0x5CDF7F0")]
	private static void CopyIfMissing(string relative, string targetRoot, Func<Stream> open)
	{
		// Lifted from source/cpp/Utility/MobileBuiltinAssets.c (Utility.MobileBuiltinAssets$$CopyIfMissing): 4 lines keep C-only constructs
		Stream __this;
		FileStream __this_00;
		bool bVar4;
		String path;
		String pSVar5;
		Stream local_60;
		FileStream local_58;
		FileStream* local_48;
		Stream* local_38;

		local_60 = null;
		local_58 = null;
		path = Path.Combine(targetRoot, relative);
		bVar4 = File.Exists(path);
		if (!bVar4) {
			pSVar5 = Path.GetDirectoryName(path);
			Directory.CreateDirectory(pSVar5);
			pSVar5 = String.Concat(path, ".tmp");
			if (open == null) {
				throw new NullReferenceException();
			}
			local_60 = (Stream)(*(code)open.invoke_impl)(open.method_code);
			local_38 = &local_60;
			local_58 = File.Create(pSVar5);
			local_48 = &local_58;
			if (local_60 == null) {
				throw new NullReferenceException();
			}
			local_60.CopyTo((Stream)local_58);
			__this_00 = local_58;
			if (local_58 != null) {
				__this_00.Dispose();
			}
			__this = local_60;
			if (local_60 != null) {
				__this.Dispose();
			}
			File.Move(pSVar5, path);
		}
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/MobileBuiltinAssets.c.

	// Utility.MobileBuiltinAssets.<>c__DisplayClass10_0$$.ctor: clean
	private void c__DisplayClass10_0__ctor()
	{
		base();
		return;
	}

	// Utility.MobileBuiltinAssets.<>c__DisplayClass10_0$$<ExtractDirectory>b__0: clean
	private Stream c__DisplayClass10_0__ExtractDirectory_b__0()
	{
		FileStream pSVar1;

		pSVar1 = File.OpenRead(this.file);
		return (Stream)pSVar1;
	}
}
