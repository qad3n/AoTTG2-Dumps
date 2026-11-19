// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TextureDownloader
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomSkins/TextureDownloader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/TextureDownloader.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Networking;

namespace CustomSkins;

[Token(Token = "0x20003D2")]
internal class TextureDownloader
{
	[Token(Token = "0x20003D3")]
	[CompilerGenerated]
	private sealed class _003CDownloadTexture_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400138F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001390")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001391")]
		[FieldOffset(Offset = "0x20")]
		public bool mipmap;

		[Token(Token = "0x4001392")]
		[FieldOffset(Offset = "0x28")]
		public string url;

		[Token(Token = "0x4001393")]
		[FieldOffset(Offset = "0x30")]
		public bool allowLocalFile;

		[Token(Token = "0x4001394")]
		[FieldOffset(Offset = "0x34")]
		public int maxSize;

		[Token(Token = "0x4001395")]
		[FieldOffset(Offset = "0x38")]
		private Texture2D _003CblankTexture_003E5__2;

		[Token(Token = "0x4001396")]
		[FieldOffset(Offset = "0x40")]
		private UnityWebRequest _003Cuwr_003E5__3;

		[Token(Token = "0x1700029C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001850")]
			[Address(RVA = "0x58673F0", Offset = "0x58663F0", VA = "0x58673F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader.<DownloadTexture>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700029D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001852")]
			[Address(RVA = "0x5867440", Offset = "0x5866440", VA = "0x5867440", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader.<DownloadTexture>d__10$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600184C")]
		[Address(RVA = "0x58663E0", Offset = "0x58653E0", VA = "0x58663E0")]
		[DebuggerHidden]
		public _003CDownloadTexture_003Ed__10(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader.<DownloadTexture>d__10$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600184D")]
		[Address(RVA = "0x5866C40", Offset = "0x5865C40", VA = "0x5866C40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader.<DownloadTexture>d__10$$System.IDisposable.Dispose): clean
			UnityWebRequest obj;
			uint uVar3;

			uVar3 = this.__1__state + 3;
			if ((uVar3 < 9) && ((0x1c1U >> (uVar3 & 0x1f) & 1) != 0)) {
				this.__1__state = -1;
				obj = this._uwr_5__3;
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x600184E")]
		[Address(RVA = "0x5866CF0", Offset = "0x5865CF0", VA = "0x5866CF0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader.<DownloadTexture>d__10$$MoveNext): 11 lines keep C-only constructs
			String url;
			TextureDownloader.d__10<DownloadTexture>* ppCVar3;
			bool bVar4;
			int iVar5;
			ulong uVar6;
			UnityWebRequest pUVar8;
			UnityWebRequestAsyncOperation pUVar9;
			Texture2D pUVar10;
			int iVar12;
			TextureDownloader.d__10<DownloadTexture> pCStack_38;
			DownloadedTextureParams UStack_30;
			byte puStack_20;

			pCStack_38 = this;
			puStack_20 = (byte)&pCStack_38;
			UStack_30.flags = 0;
			UStack_30.mipmapCount = 0;
			switch(this.__1__state) {
			case 0:
				this.__1__state = -1;
				bVar4 = this.mipmap;
				puStack_20 = (byte)&pCStack_38;
				if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor == 0) {
					puStack_20 = (byte)&pCStack_38;
				}
				pUVar10 = new Texture2D(4, 4, 4, bVar4);
				pCStack_38._blankTexture_5__2 = pUVar10;
				pCStack_38.__2__current = (object)pCStack_38._blankTexture_5__2;
				iVar5 = 1;
				goto label_059672ac;
			case 1:
				this.__1__state = -1;
				url = this.url;
				bVar4 = this.allowLocalFile;
				puStack_20 = (byte)&pCStack_38;
				if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor == 0) {
					puStack_20 = (byte)&pCStack_38;
				}
				bVar4 = TextureDownloader.ValidTextureURL(url, bVar4);
				if (!bVar4) {
					return false;
				}
				break;
			case 2:
				this.__1__state = -1;
				puStack_20 = (byte)&pCStack_38;
				break;
			case 3:
				this.__1__state = -3;
				puStack_20 = (byte)&pCStack_38;
				if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor == 0) {
					puStack_20 = (byte)&pCStack_38;
				}
				iVar12 = TextureDownloader.CurrentConcurrentDownloads + -1;
				TextureDownloader.CurrentConcurrentDownloads = iVar12;
				iVar5 = Math.Max(iVar12, 0);
				TextureDownloader.CurrentConcurrentDownloads = iVar5;
				pUVar8 = pCStack_38._uwr_5__3;
				if (pUVar8 == null) {
					throw new NullReferenceException();
				}
				iVar5 = pUVar8.result;
				if (iVar5 == 1) {
					pUVar8 = pCStack_38._uwr_5__3;
					if (pUVar8 == null) {
						throw new NullReferenceException();
					}
					uVar6 = pUVar8.downloadedBytes;
					if (uVar6 <= (ulong)(long)pCStack_38.maxSize) {
						pUVar10 = DownloadHandlerTexture.GetContent(pCStack_38._uwr_5__3);
						bVar4 = ((Object)pUVar10 != null);
						if (bVar4) {
							if (pCStack_38 == null) {
								throw new NullReferenceException();
							}
						}
						else {
							pUVar10 = pCStack_38._blankTexture_5__2;
						}
						pCStack_38.__2__current = (object)pUVar10;
						iVar5 = 5;
						goto label_059672ac;
					}
				}
				pCStack_38.__2__current = (object)pCStack_38._blankTexture_5__2;
				iVar5 = 4;
				goto label_059672ac;
			case 4:
				this.__1__state = -3;
				puStack_20 = (byte)&pCStack_38;
				if (Il2CppMethodInitialized_07545961 == false) {
					puStack_20 = (byte)&pCStack_38;
					Il2CppMethodInitialized_07545961 = true;
				}
				this.__1__state = -1;
				pUVar8 = this._uwr_5__3;
				if (pUVar8 == null) {
					return false;
				}
				pUVar8.Dispose();
				return false;
			case 5:
				this.__1__state = -3;
				ppCVar3 = &pCStack_38;
				if (Il2CppMethodInitialized_07545961 == false) {
					Il2CppMethodInitialized_07545961 = true;
					ppCVar3 = (TextureDownloader.d__10<DownloadTexture>*)puStack_20;
				}
				puStack_20 = (byte)ppCVar3;
				this.__1__state = -1;
				pUVar8 = this._uwr_5__3;
				if (pUVar8 != null) {
					pUVar8.Dispose();
				}
				pCStack_38._uwr_5__3 = null;
				return false;
				return false;
			}
			if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor == 0) {
				iVar12 = TextureDownloader.CurrentConcurrentDownloads;
			}
			else {
				iVar12 = TextureDownloader.CurrentConcurrentDownloads;
			}
			if (iVar12 < 1) {
				if (((typeof(TextureDownloader))._2).cctor_finished_or_no_cctor == 0) {
				}
				iVar12 = TextureDownloader.CurrentConcurrentDownloads + 1;
				TextureDownloader.CurrentConcurrentDownloads = iVar12;
				iVar5 = Math.Min(iVar12, 1);
				TextureDownloader.CurrentConcurrentDownloads = iVar5;
				UStack_30 = (DownloadedTextureParams)DownloadedTextureParams.Default;
				UStack_30.mipmapChain = pCStack_38.mipmap;
				UStack_30.readable = false;
				pUVar8 = UnityWebRequestTexture.GetTexture(pCStack_38.url, (DownloadedTextureParams)UStack_30);
				pCStack_38._uwr_5__3 = pUVar8;
				pCStack_38.__1__state = -3;
				pUVar8 = pCStack_38._uwr_5__3;
				if (pUVar8 == null) {
					throw new NullReferenceException();
				}
				pUVar9 = pUVar8.SendWebRequest();
				pCStack_38.__2__current = (object)pUVar9;
				iVar5 = 3;
			}
			else {
				pCStack_38.__2__current = (object)pCStack_38._blankTexture_5__2;
				iVar5 = 2;
			}
		label_059672ac: ;
			pCStack_38.__1__state = iVar5;
			return true;
		}

		[Token(Token = "0x600184F")]
		[Address(RVA = "0x5867350", Offset = "0x5866350", VA = "0x5867350")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader.<DownloadTexture>d__10$$<>m__Finally1): clean
			UnityWebRequest obj;

			this.__1__state = -1;
			obj = this._uwr_5__3;
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x6001851")]
		[Address(RVA = "0x5867400", Offset = "0x5866400", VA = "0x5867400", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader.<DownloadTexture>d__10$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomSkins_TextureDownloader_DownloadTexture_d__10_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400138A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] ValidHosts;

	[Token(Token = "0x400138B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] ValidFileEndings;

	[Token(Token = "0x400138C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string[] URLPrefixes;

	[Token(Token = "0x400138D")]
	private const int MaxConcurrentDownloads = 1;

	[Token(Token = "0x400138E")]
	[FieldOffset(Offset = "0x18")]
	private static int CurrentConcurrentDownloads;

	[Token(Token = "0x6001840")]
	[Address(RVA = "0x585F8D0", Offset = "0x585E8D0", VA = "0x585F8D0")]
	public static void ResetConcurrentDownloads()
	{
		// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader$$ResetConcurrentDownloads): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545955 == false) {
			Il2CppMethodInitialized_07545955 = true;
			uVar1 = (typeof(TextureDownloader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TextureDownloader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			TextureDownloader.CurrentConcurrentDownloads = 0;
			return;
		}
		*(uint)((long)(typeof(TextureDownloader)).static_fields + 0x18) = 0;
		return;
	}

	[Token(Token = "0x6001841")]
	[Address(RVA = "0x5863160", Offset = "0x5862160", VA = "0x5863160")]
	public static bool ValidTextureURL(string url, bool allowLocalFile = false)
	{
		// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader$$ValidTextureURL): clean
		bool bVar1;
		String a;
		bool bVar2;
		MethodInfo method_00;

		bVar1 = String.IsNullOrEmpty(url);
		if (!bVar1) {
			if (url == null) {
	label_059632a6: ;
				throw new NullReferenceException();
			}
			a = url.ToLowerInvariant();
			bVar1 = (a == BaseCustomSkinLoader.TransparentURL);
			if (!bVar1) {
				if (a == null) goto label_059632a6;
				method_00 = (MethodInfo *)"file:";
				bVar1 = a.StartsWith("file:");
				if (bVar1) {
					if (allowLocalFile) {
						bVar1 = TextureDownloader.CheckValidLocalFileURL(a);
						return bVar1;
					}
				}
				else if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor == 0) {
					bVar1 = TextureDownloader.CheckFileEnding(a);
					if (bVar1) goto label_0596326e;
				}
				else {
					bVar1 = TextureDownloader.CheckFileEnding(a);
					if (bVar1) {
	label_0596326e: ;
						bVar1 = TextureDownloader.CheckValidHost(a);
						return bVar1;
					}
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6001842")]
	[Address(RVA = "0x5865C80", Offset = "0x5864C80", VA = "0x5865C80")]
	private static bool CheckValidLocalFileURL(string url)
	{
		// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader$$CheckValidLocalFileURL): clean
		uint uVar1;
		String[] pSVar2;
		bool bVar3;
		ushort uVar4;
		int iVar5;
		ulong uVar6;
		String pSVar7;
		ulong uVar8;
		Uri local_30;

		local_30 = null;
		if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07545958 == false) goto label_05965d23;
	label_05965cf4: ;
			if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor != 0) goto label_05965d00;
	label_05965d42: ;
			pSVar2 = TextureDownloader.ValidFileEndings;
		}
		else {
			if (Il2CppMethodInitialized_07545958 != false) goto label_05965cf4;
	label_05965d23: ;
			Il2CppMethodInitialized_07545958 = true;
			if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor == 0) goto label_05965d42;
	label_05965d00: ;
			pSVar2 = TextureDownloader.ValidFileEndings;
		}
		if (pSVar2 == null) {
	label_05965da9: ;
			throw new NullReferenceException();
		}
		iVar5 = (int)pSVar2.Length;
		if (url == null) {
			if (0 < iVar5) goto label_05965da9;
		}
		else if (0 < iVar5) {
			uVar6 = pSVar2.Length & 0xffffffff;
			uVar8 = 0;
			do {
				if (uVar6 <= uVar8) {
					throw new IndexOutOfRangeException();
				}
				bVar3 = url.EndsWith(pSVar2[uVar8]);
				if (bVar3) {
					if (url._stringLength < 0xb) {
						return false;
					}
					bVar3 = url.StartsWith("file:///");
					if (!bVar3) {
						return false;
					}
					uVar4 = url.get_Chars(8);
					bVar3 = Char.IsLetter(uVar4);
					if (!bVar3) {
						return false;
					}
					uVar4 = url.get_Chars(9);
					if (uVar4 != 0x3a) {
						return false;
					}
					uVar4 = url.get_Chars(10);
					if (uVar4 != 0x2f) {
						return false;
					}
					bVar3 = Uri.TryCreate(url, 1, ref local_30);
					if (!bVar3) {
						return false;
					}
					if (local_30 != null) {
						bVar3 = local_30.IsFile;
						if (!bVar3) {
							return false;
						}
						if (local_30 != null) {
							bVar3 = local_30.IsUnc;
							if (bVar3) {
								return false;
							}
							if (local_30 != null) {
								pSVar7 = local_30.Host;
								bVar3 = String.IsNullOrEmpty(pSVar7);
								if (!bVar3) {
									return false;
								}
								if (local_30 == null) {
									throw new NullReferenceException();
								}
								pSVar7 = local_30.LocalPath;
								if (pSVar7 == null) {
									throw new NullReferenceException();
								}
								if (pSVar7._stringLength < 3) {
									return false;
								}
								uVar4 = pSVar7.get_Chars(0);
								bVar3 = Char.IsLetter(uVar4);
								if (!bVar3) {
									return false;
								}
								uVar4 = pSVar7.get_Chars(1);
								if (uVar4 != 0x3a) {
									return false;
								}
								uVar4 = pSVar7.get_Chars(2);
								if (uVar4 != Path.DirectorySeparatorChar) {
									uVar4 = pSVar7.get_Chars(2);
									if (uVar4 != Path.AltDirectorySeparatorChar) {
										return false;
									}
								}
								pSVar7 = Path.GetFullPath(pSVar7);
								pSVar7 = Path.GetPathRoot(pSVar7);
								if (pSVar7 == null) {
									return false;
								}
								if (pSVar7._stringLength != 3) {
									return false;
								}
								uVar4 = pSVar7.get_Chars(0);
								bVar3 = Char.IsLetter(uVar4);
								if (!bVar3) {
									return false;
								}
								uVar4 = pSVar7.get_Chars(1);
								if (uVar4 != 0x3a) {
									return false;
								}
								uVar4 = pSVar7.get_Chars(2);
								if (uVar4 == Path.DirectorySeparatorChar) {
									return true;
								}
								uVar4 = pSVar7.get_Chars(2);
								return uVar4 == Path.AltDirectorySeparatorChar;
							}
						}
					}
					goto label_05965da9;
				}
				uVar8 = uVar8 + 1;
				uVar1 = (uint)pSVar2.Length;
				uVar6 = (ulong)uVar1;
			} while ((long)uVar8 < (long)(int)uVar1);
		}
		return false;
	}

	[Token(Token = "0x6001843")]
	[Address(RVA = "0x5866190", Offset = "0x5865190", VA = "0x5866190")]
	private static bool CheckFileEnding(string url)
	{
		// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader$$CheckFileEnding): clean
		uint uVar1;
		String[] pSVar2;
		bool bVar3;
		int iVar4;
		ulong uVar5;
		ulong uVar6;

		if (Il2CppMethodInitialized_07545958 == false) {
			Il2CppMethodInitialized_07545958 = true;
			if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor != 0) goto label_059661b4;
	label_059661ef: ;
			pSVar2 = TextureDownloader.ValidFileEndings;
		}
		else {
			if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor == 0) goto label_059661ef;
	label_059661b4: ;
			pSVar2 = TextureDownloader.ValidFileEndings;
		}
		if (pSVar2 == null) {
	label_05966260: ;
			throw new NullReferenceException();
		}
		iVar4 = (int)pSVar2.Length;
		if (url == null) {
			if (0 < iVar4) goto label_05966260;
		}
		else if (0 < iVar4) {
			uVar5 = pSVar2.Length & 0xffffffff;
			uVar6 = 0;
			while(true) {
				if (uVar5 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				bVar3 = url.EndsWith(pSVar2[uVar6]);
				if (bVar3) break;
				uVar6 = uVar6 + 1;
				uVar1 = (uint)pSVar2.Length;
				uVar5 = (ulong)uVar1;
				if ((long)(int)uVar1 <= (long)uVar6) {
					return false;
				}
			}
			return true;
		}
		return false;
	}

	[Token(Token = "0x6001844")]
	[Address(RVA = "0x5866270", Offset = "0x5865270", VA = "0x5866270")]
	private static bool CheckValidHost(string url)
	{
		// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader$$CheckValidHost): clean
		uint uVar1;
		String[] pSVar2;
		String value;
		bool bVar3;
		int iVar4;
		ulong uVar5;
		ulong uVar6;

		if (Il2CppMethodInitialized_07545959 == false) {
			Il2CppMethodInitialized_07545959 = true;
			if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor != 0) goto label_05966298;
	label_059662d3: ;
			pSVar2 = TextureDownloader.URLPrefixes;
		}
		else {
			if ((typeof(TextureDownloader)._2).cctor_finished_or_no_cctor == 0) goto label_059662d3;
	label_05966298: ;
			pSVar2 = TextureDownloader.URLPrefixes;
		}
		if (pSVar2 != null) {
			if (0 < (int)pSVar2.Length) {
				uVar5 = pSVar2.Length & 0xffffffff;
				uVar6 = 0;
				do {
					if (uVar5 <= uVar6) goto label_059663d0;
					if (url == null) goto label_059663cb;
					value = pSVar2[uVar6];
					bVar3 = url.StartsWith(value);
					if (bVar3) {
						if (value == null) goto label_059663cb;
						url = url.Remove(0, value._stringLength);
					}
					uVar6 = uVar6 + 1;
					uVar1 = (uint)pSVar2.Length;
					uVar5 = (ulong)uVar1;
				} while ((long)uVar6 < (long)(int)uVar1);
			}
			pSVar2 = TextureDownloader.ValidHosts;
			if (pSVar2 != null) {
				iVar4 = (int)pSVar2.Length;
				if (url == null) {
					if (0 < iVar4) goto label_059663cb;
				}
				else if (0 < iVar4) {
					uVar5 = pSVar2.Length & 0xffffffff;
					uVar6 = 0;
					while (uVar6 < uVar5) {
						bVar3 = url.StartsWith(pSVar2[uVar6]);
						if (bVar3) {
							return true;
						}
						uVar6 = uVar6 + 1;
						uVar1 = (uint)pSVar2.Length;
						uVar5 = (ulong)uVar1;
						if ((long)(int)uVar1 <= (long)uVar6) {
							return false;
						}
					}
	label_059663d0: ;
					throw new IndexOutOfRangeException();
				}
				return false;
			}
		}
	label_059663cb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001845")]
	[Address(RVA = "0x58648C0", Offset = "0x58638C0", VA = "0x58648C0")]
	[IteratorStateMachine(typeof(_003CDownloadTexture_003Ed__10))]
	public static IEnumerator DownloadTexture(MonoBehaviour obj, string url, bool mipmap, int maxSize, bool allowLocalFile = false)
	{
		// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader$$DownloadTexture): clean
		TextureDownloader.d__10<DownloadTexture> __this;

		__this = new TextureDownloader.d__10<DownloadTexture>();
		__this.__1__state = 0;
		__this.url = url;
		__this.mipmap = mipmap;
		__this.maxSize = maxSize;
		__this.allowLocalFile = allowLocalFile;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6001846")]
	[Address(RVA = "0x5866400", Offset = "0x5865400", VA = "0x5866400")]
	private static bool CanStartTextureDownload()
	{
		// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader$$CanStartTextureDownload): clean
		return TextureDownloader.CurrentConcurrentDownloads < 1;
	}

	[Token(Token = "0x6001847")]
	[Address(RVA = "0x5866450", Offset = "0x5865450", VA = "0x5866450")]
	private static void OnStartTextureDownload()
	{
		// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader$$OnStartTextureDownload): clean
		int iVar1;
		int val1;

		val1 = TextureDownloader.CurrentConcurrentDownloads + 1;
		TextureDownloader.CurrentConcurrentDownloads = val1;
		iVar1 = Math.Min(val1, 1);
		TextureDownloader.CurrentConcurrentDownloads = iVar1;
		return;
	}

	[Token(Token = "0x6001848")]
	[Address(RVA = "0x58664F0", Offset = "0x58654F0", VA = "0x58664F0")]
	private static void OnStopTextureDownload()
	{
		// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader$$OnStopTextureDownload): clean
		int iVar1;
		int val1;

		val1 = TextureDownloader.CurrentConcurrentDownloads + -1;
		TextureDownloader.CurrentConcurrentDownloads = val1;
		iVar1 = Math.Max(val1, 0);
		TextureDownloader.CurrentConcurrentDownloads = iVar1;
		return;
	}

	[Token(Token = "0x6001849")]
	[Address(RVA = "0x5866580", Offset = "0x5865580", VA = "0x5866580")]
	private static Texture2D CreateBlankTexture(bool mipmap)
	{
		// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader$$CreateBlankTexture): clean
		Texture2D __this;

		__this = new Texture2D(4, 4, 4, mipmap);
		return __this;
	}

	[Token(Token = "0x600184A")]
	[Address(RVA = "0x58665E0", Offset = "0x58655E0", VA = "0x58665E0")]
	public TextureDownloader()
	{
		// Lifted from source/cpp/CustomSkins/TextureDownloader.c (CustomSkins.TextureDownloader$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomSkins/TextureDownloader.c.

	// CustomSkins.TextureDownloader$$.cctor: clean
	static TextureDownloader()
	{
		CustomSkins_TextureDownloader_StaticFields pCVar1;
		String[] pSVar2;

		pSVar2 = (String[])new string[0x17];
		if (pSVar2 == null) goto label_05966c31;
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "i.imgur.com/";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "imgur.com/";
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = "image.ibb.co/";
					if ((pSVar2.Length & 0xfffffffc) != 0) {
						pSVar2[3] = "i.ibb.co/";
						if (4 < (uint)pSVar2.Length) {
							pSVar2[4] = "i.reddit.it/";
							if (5 < (uint)pSVar2.Length) {
								pSVar2[5] = "cdn.discordapp.com/attachments/";
								if (6 < (uint)pSVar2.Length) {
									pSVar2[6] = "media.discordapp.net/attachments/";
									if ((pSVar2.Length & 0xfffffff8) != 0) {
										pSVar2[7] = "images-ext-2.discordapp.net/external/";
										if (8 < (uint)pSVar2.Length) {
											pSVar2[8] = "i.reddit.it/";
											if (9 < (uint)pSVar2.Length) {
												pSVar2[9] = "gyazo.com/";
												if (10 < (uint)pSVar2.Length) {
													pSVar2[10] = "puu.sh/";
													if (0xb < (uint)pSVar2.Length) {
														pSVar2[0xb] = "i.postimg.cc/";
														if (0xc < (uint)pSVar2.Length) {
															pSVar2[0xc] = "postimg./";
															if (0xd < (uint)pSVar2.Length) {
																pSVar2[0xd] = "deviantart.com/";
																if (0xe < (uint)pSVar2.Length) {
																	pSVar2[0xe] = "photobucket.com/";
																	if ((pSVar2.Length & 0xfffffff0) != 0) {
																		pSVar2[0xf] = "aotcorehome.files.wordpress.com/";
																		if (0x10 < (uint)pSVar2.Length) {
																			pSVar2[0x10] = "s1.ax1x.com/";
																			if (0x11 < (uint)pSVar2.Length) {
																				pSVar2[0x11] = "s27.postimg.io/";
																				if (0x12 < (uint)pSVar2.Length) {
																					pSVar2[0x12] = "1.bp.blogspot.com/";
																					if (0x13 < (uint)pSVar2.Length) {
																						pSVar2[0x13] = "tiebapic.baidu.com/";
																						if (0x14 < (uint)pSVar2.Length) {
																							pSVar2[0x14] = "s25.postimg.gg/";
																							if (0x15 < (uint)pSVar2.Length) {
																								pSVar2[0x15] = "aotcorehome.files.wordpress.com/";
																								if (0x16 < (uint)pSVar2.Length) {
																									pSVar2[0x16] = "imgse.com/";
																									TextureDownloader. ValidHosts = pSVar2;
																									pSVar2 = (String[])new string[3];
																									if (pSVar2 == null) {
	label_05966c31: ;
																										throw new NullReferenceException();
																									}
																									if ((int)pSVar2.Length != 0) {
																										pSVar2[0] = ".jpg";
																										if ((pSVar2.Length & 0xfffffffe) != 0) {
																											pSVar2[1] = ".png";
																											if (2 < (uint)pSVar2.Length) {
																												pSVar2[2] = ".jpeg";
																												pCVar1 = typeof(TextureDownloader). static_fields;
																												pCVar1.ValidFileEndings = pSVar2;
																												pSVar2 = (String[])new string[3];
																												if (pSVar2 == null) goto label_05966c31;
																												if ((int)pSVar2.Length != 0) {
																													pSVar2[0] = "https://";
																													if ((pSVar2.Length & 0xfffffffe) != 0) {
																														pSVar2[1] = "http://";
																														if (2 < (uint)pSVar2.Length) {
																															pSVar2[2] = "www.";
																															pCVar1 = typeof(TextureDownloader). static_fields;
																															pCVar1.URLPrefixes = pSVar2;
																															typeof(TextureDownloader). static_fields.CurrentConcurrentDownloads = 0;
																															return;
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
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
}
