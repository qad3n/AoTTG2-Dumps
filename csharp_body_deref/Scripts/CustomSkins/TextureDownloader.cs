// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TextureDownloader
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200025B")]
internal class TextureDownloader
{
	[Token(Token = "0x200025C")]
	[CompilerGenerated]
	private sealed class _003CDownloadTexture_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000CC8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000CC9")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000CCA")]
		[FieldOffset(Offset = "0x20")]
		public bool mipmap;

		[Token(Token = "0x4000CCB")]
		[FieldOffset(Offset = "0x28")]
		public string url;

		[Token(Token = "0x4000CCC")]
		[FieldOffset(Offset = "0x30")]
		public int maxSize;

		[Token(Token = "0x4000CCD")]
		[FieldOffset(Offset = "0x38")]
		private Texture2D _003CblankTexture_003E5__2;

		[Token(Token = "0x4000CCE")]
		[FieldOffset(Offset = "0x40")]
		private UnityWebRequest _003Cuwr_003E5__3;

		[Token(Token = "0x170001C3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000E7F")]
			[Address(RVA = "0x3F972D0", Offset = "0x3F972D0", VA = "0x3F972D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001C4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E81")]
			[Address(RVA = "0x3F97320", Offset = "0x3F97320", VA = "0x3F97320", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E7A")]
		[Address(RVA = "0x3F95970", Offset = "0x3F95970", VA = "0x3F95970")]
		[DebuggerHidden]
		public _003CDownloadTexture_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E7B")]
		[Address(RVA = "0x3F96480", Offset = "0x3F96480", VA = "0x3F96480", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E7C")]
		[Address(RVA = "0x3F965C0", Offset = "0x3F965C0", VA = "0x3F965C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E7D")]
		[Address(RVA = "0x3F97190", Offset = "0x3F97190", VA = "0x3F97190")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E7E")]
		[Address(RVA = "0x3F97230", Offset = "0x3F97230", VA = "0x3F97230")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000E80")]
		[Address(RVA = "0x3F972E0", Offset = "0x3F972E0", VA = "0x3F972E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000CC3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] ValidHosts;

	[Token(Token = "0x4000CC4")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] ValidFileEndings;

	[Token(Token = "0x4000CC5")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string[] URLPrefixes;

	[Token(Token = "0x4000CC6")]
	private const int MaxConcurrentDownloads = 1;

	[Token(Token = "0x4000CC7")]
	[FieldOffset(Offset = "0x18")]
	private static int CurrentConcurrentDownloads;

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x3F956B0", Offset = "0x3F956B0", VA = "0x3F956B0")]
	public static void ResetConcurrentDownloads()
	{
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x3F93290", Offset = "0x3F93290", VA = "0x3F93290")]
	public static bool ValidTextureURL(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6E")]
	[Address(RVA = "0x3F95720", Offset = "0x3F95720", VA = "0x3F95720")]
	private static bool CheckFileEnding(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x3F957F0", Offset = "0x3F957F0", VA = "0x3F957F0")]
	private static bool CheckValidHost(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x3F94630", Offset = "0x3F94630", VA = "0x3F94630")]
	[IteratorStateMachine(typeof(_003CDownloadTexture_003Ed__9))]
	public static IEnumerator DownloadTexture(MonoBehaviour obj, string url, bool mipmap, int maxSize)
	{
		return null;
	}

	[Token(Token = "0x6000E71")]
	[Address(RVA = "0x3F95990", Offset = "0x3F95990", VA = "0x3F95990")]
	private static bool CanStartTextureDownload()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x3F959E0", Offset = "0x3F959E0", VA = "0x3F959E0")]
	private static void OnStartTextureDownload()
	{
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x3F95A80", Offset = "0x3F95A80", VA = "0x3F95A80")]
	private static void OnStopTextureDownload()
	{
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x3F95B10", Offset = "0x3F95B10", VA = "0x3F95B10")]
	private static bool IsPowerOfTwo(int num)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x3F95B30", Offset = "0x3F95B30", VA = "0x3F95B30")]
	private static int GetClosestPowerOfTwo(int num)
	{
		return default(int);
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x3F95B90", Offset = "0x3F95B90", VA = "0x3F95B90")]
	private static Texture2D CreateBlankTexture(bool mipmap)
	{
		return null;
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x3F95BF0", Offset = "0x3F95BF0", VA = "0x3F95BF0")]
	private static Texture2D DecodeTexture(UnityWebRequest uwr, bool mipmap)
	{
		return null;
	}

	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x3F95E30", Offset = "0x3F95E30", VA = "0x3F95E30")]
	public TextureDownloader()
	{
	}
}
