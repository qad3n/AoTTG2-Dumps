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

[Token(Token = "0x2000377")]
internal class TextureDownloader
{
	[Token(Token = "0x2000378")]
	[CompilerGenerated]
	private sealed class _003CDownloadTexture_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011FE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011FF")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001200")]
		[FieldOffset(Offset = "0x20")]
		public bool mipmap;

		[Token(Token = "0x4001201")]
		[FieldOffset(Offset = "0x28")]
		public string url;

		[Token(Token = "0x4001202")]
		[FieldOffset(Offset = "0x30")]
		public bool allowLocalFile;

		[Token(Token = "0x4001203")]
		[FieldOffset(Offset = "0x34")]
		public int maxSize;

		[Token(Token = "0x4001204")]
		[FieldOffset(Offset = "0x38")]
		private Texture2D _003CblankTexture_003E5__2;

		[Token(Token = "0x4001205")]
		[FieldOffset(Offset = "0x40")]
		private UnityWebRequest _003Cuwr_003E5__3;

		[Token(Token = "0x1700025B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60015ED")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700025C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60015EF")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60015E8")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDownloadTexture_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60015E9")]
		[Address(RVA = "0x1E98220", Offset = "0x1E96820", VA = "0x181E98220", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60015EA")]
		[Address(RVA = "0x1E97A10", Offset = "0x1E96010", VA = "0x181E97A10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60015EB")]
		[Address(RVA = "0x1E98370", Offset = "0x1E96970", VA = "0x181E98370")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60015EC")]
		[Address(RVA = "0x1E983C0", Offset = "0x1E969C0", VA = "0x181E983C0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60015EE")]
		[Address(RVA = "0x1E981E0", Offset = "0x1E967E0", VA = "0x181E981E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40011F9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] ValidHosts;

	[Token(Token = "0x40011FA")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] ValidFileEndings;

	[Token(Token = "0x40011FB")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string[] URLPrefixes;

	[Token(Token = "0x40011FC")]
	private const int MaxConcurrentDownloads = 1;

	[Token(Token = "0x40011FD")]
	[FieldOffset(Offset = "0x18")]
	private static int CurrentConcurrentDownloads;

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x1E95170", Offset = "0x1E93770", VA = "0x181E95170")]
	public static void ResetConcurrentDownloads()
	{
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x1E951D0", Offset = "0x1E937D0", VA = "0x181E951D0")]
	public static bool ValidTextureURL(string url, bool allowLocalFile = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x1E948C0", Offset = "0x1E92EC0", VA = "0x181E948C0")]
	private static bool CheckValidLocalFileURL(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x1E946B0", Offset = "0x1E92CB0", VA = "0x181E946B0")]
	private static bool CheckFileEnding(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x1E94770", Offset = "0x1E92D70", VA = "0x181E94770")]
	private static bool CheckValidHost(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x1E94F00", Offset = "0x1E93500", VA = "0x181E94F00")]
	[IteratorStateMachine(typeof(_003CDownloadTexture_003Ed__10))]
	public static IEnumerator DownloadTexture(MonoBehaviour obj, string url, bool mipmap, int maxSize, bool allowLocalFile = false)
	{
		return null;
	}

	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x1E94650", Offset = "0x1E92C50", VA = "0x181E94650")]
	private static bool CanStartTextureDownload()
	{
		return default(bool);
	}

	[Token(Token = "0x60015E0")]
	[Address(RVA = "0x1E95010", Offset = "0x1E93610", VA = "0x181E95010")]
	private static void OnStartTextureDownload()
	{
	}

	[Token(Token = "0x60015E1")]
	[Address(RVA = "0x1E950C0", Offset = "0x1E936C0", VA = "0x181E950C0")]
	private static void OnStopTextureDownload()
	{
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x1E94FF0", Offset = "0x1E935F0", VA = "0x181E94FF0")]
	private static bool IsPowerOfTwo(int num)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x1E94F80", Offset = "0x1E93580", VA = "0x181E94F80")]
	private static int GetClosestPowerOfTwo(int num)
	{
		return default(int);
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x1E94D30", Offset = "0x1E93330", VA = "0x181E94D30")]
	private static Texture2D CreateBlankTexture(bool mipmap)
	{
		return null;
	}

	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x1E94DA0", Offset = "0x1E933A0", VA = "0x181E94DA0")]
	private static Texture2D DecodeTexture(UnityWebRequest uwr, bool mipmap)
	{
		return null;
	}

	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TextureDownloader()
	{
	}
}
