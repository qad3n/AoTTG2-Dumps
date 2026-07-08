using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Networking;

namespace CustomSkins;

[Token(Token = "0x2000225")]
internal class TextureDownloader
{
	[Token(Token = "0x2000226")]
	[CompilerGenerated]
	private sealed class _003CDownloadTexture_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000BEF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000BF0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000BF1")]
		[FieldOffset(Offset = "0x20")]
		public bool mipmap;

		[Token(Token = "0x4000BF2")]
		[FieldOffset(Offset = "0x28")]
		public string url;

		[Token(Token = "0x4000BF3")]
		[FieldOffset(Offset = "0x30")]
		public int maxSize;

		[Token(Token = "0x4000BF4")]
		[FieldOffset(Offset = "0x38")]
		private Texture2D _003CblankTexture_003E5__2;

		[Token(Token = "0x4000BF5")]
		[FieldOffset(Offset = "0x40")]
		private UnityWebRequest _003Cuwr_003E5__3;

		[Token(Token = "0x1700016C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000CE6")]
			[Address(RVA = "0x414A200", Offset = "0x414A200", VA = "0x414A200", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700016D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000CE8")]
			[Address(RVA = "0x414A250", Offset = "0x414A250", VA = "0x414A250", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CE1")]
		[Address(RVA = "0x41488A0", Offset = "0x41488A0", VA = "0x41488A0")]
		[DebuggerHidden]
		public _003CDownloadTexture_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000CE2")]
		[Address(RVA = "0x41493B0", Offset = "0x41493B0", VA = "0x41493B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000CE3")]
		[Address(RVA = "0x41494F0", Offset = "0x41494F0", VA = "0x41494F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000CE4")]
		[Address(RVA = "0x414A0C0", Offset = "0x414A0C0", VA = "0x414A0C0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000CE5")]
		[Address(RVA = "0x414A160", Offset = "0x414A160", VA = "0x414A160")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000CE7")]
		[Address(RVA = "0x414A210", Offset = "0x414A210", VA = "0x414A210", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000BEA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] ValidHosts;

	[Token(Token = "0x4000BEB")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] ValidFileEndings;

	[Token(Token = "0x4000BEC")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string[] URLPrefixes;

	[Token(Token = "0x4000BED")]
	private const int MaxConcurrentDownloads = 1;

	[Token(Token = "0x4000BEE")]
	[FieldOffset(Offset = "0x18")]
	private static int CurrentConcurrentDownloads;

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x413FC80", Offset = "0x413FC80", VA = "0x413FC80")]
	public static void ResetConcurrentDownloads()
	{
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x4146230", Offset = "0x4146230", VA = "0x4146230")]
	public static bool ValidTextureURL(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x4148650", Offset = "0x4148650", VA = "0x4148650")]
	private static bool CheckFileEnding(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x4148720", Offset = "0x4148720", VA = "0x4148720")]
	private static bool CheckValidHost(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x41475D0", Offset = "0x41475D0", VA = "0x41475D0")]
	[IteratorStateMachine(typeof(_003CDownloadTexture_003Ed__9))]
	public static IEnumerator DownloadTexture(MonoBehaviour obj, string url, bool mipmap, int maxSize)
	{
		return null;
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x41488C0", Offset = "0x41488C0", VA = "0x41488C0")]
	private static bool CanStartTextureDownload()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x4148910", Offset = "0x4148910", VA = "0x4148910")]
	private static void OnStartTextureDownload()
	{
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x41489B0", Offset = "0x41489B0", VA = "0x41489B0")]
	private static void OnStopTextureDownload()
	{
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x4148A40", Offset = "0x4148A40", VA = "0x4148A40")]
	private static bool IsPowerOfTwo(int num)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x4148A60", Offset = "0x4148A60", VA = "0x4148A60")]
	private static int GetClosestPowerOfTwo(int num)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x4148AC0", Offset = "0x4148AC0", VA = "0x4148AC0")]
	private static Texture2D CreateBlankTexture(bool mipmap)
	{
		return null;
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x4148B20", Offset = "0x4148B20", VA = "0x4148B20")]
	private static Texture2D DecodeTexture(UnityWebRequest uwr, bool mipmap)
	{
		return null;
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x4148D60", Offset = "0x4148D60", VA = "0x4148D60")]
	public TextureDownloader()
	{
	}
}
