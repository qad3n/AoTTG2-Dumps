// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TextureDownloader
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomSkins/TextureDownloader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/TextureDownloader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x600184C")]
		[Address(RVA = "0x58663E0", Offset = "0x58653E0", VA = "0x58663E0")]
		[DebuggerHidden]
		public _003CDownloadTexture_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600184D")]
		[Address(RVA = "0x5866C40", Offset = "0x5865C40", VA = "0x5866C40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600184E")]
		[Address(RVA = "0x5866CF0", Offset = "0x5865CF0", VA = "0x5866CF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600184F")]
		[Address(RVA = "0x5867350", Offset = "0x5866350", VA = "0x5867350")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001851")]
		[Address(RVA = "0x5867400", Offset = "0x5866400", VA = "0x5867400", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
	}

	[Token(Token = "0x6001841")]
	[Address(RVA = "0x5863160", Offset = "0x5862160", VA = "0x5863160")]
	public static bool ValidTextureURL(string url, bool allowLocalFile = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6001842")]
	[Address(RVA = "0x5865C80", Offset = "0x5864C80", VA = "0x5865C80")]
	private static bool CheckValidLocalFileURL(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6001843")]
	[Address(RVA = "0x5866190", Offset = "0x5865190", VA = "0x5866190")]
	private static bool CheckFileEnding(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6001844")]
	[Address(RVA = "0x5866270", Offset = "0x5865270", VA = "0x5866270")]
	private static bool CheckValidHost(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6001845")]
	[Address(RVA = "0x58648C0", Offset = "0x58638C0", VA = "0x58648C0")]
	[IteratorStateMachine(typeof(_003CDownloadTexture_003Ed__10))]
	public static IEnumerator DownloadTexture(MonoBehaviour obj, string url, bool mipmap, int maxSize, bool allowLocalFile = false)
	{
		return null;
	}

	[Token(Token = "0x6001846")]
	[Address(RVA = "0x5866400", Offset = "0x5865400", VA = "0x5866400")]
	private static bool CanStartTextureDownload()
	{
		return default(bool);
	}

	[Token(Token = "0x6001847")]
	[Address(RVA = "0x5866450", Offset = "0x5865450", VA = "0x5866450")]
	private static void OnStartTextureDownload()
	{
	}

	[Token(Token = "0x6001848")]
	[Address(RVA = "0x58664F0", Offset = "0x58654F0", VA = "0x58664F0")]
	private static void OnStopTextureDownload()
	{
	}

	[Token(Token = "0x6001849")]
	[Address(RVA = "0x5866580", Offset = "0x5865580", VA = "0x5866580")]
	private static Texture2D CreateBlankTexture(bool mipmap)
	{
		return null;
	}

	[Token(Token = "0x600184A")]
	[Address(RVA = "0x58665E0", Offset = "0x58655E0", VA = "0x58665E0")]
	public TextureDownloader()
	{
	}
}
