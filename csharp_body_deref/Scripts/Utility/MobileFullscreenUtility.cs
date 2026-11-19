// ==================== AoTTG2 cross-reference ====================
// Type: Utility.MobileFullscreenUtility
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Utility/MobileFullscreenUtility.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x200090B")]
internal static class MobileFullscreenUtility
{
	[Token(Token = "0x200090C")]
	[CompilerGenerated]
	private sealed class _003CRefreshUIAfterResolutionChange_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002DBF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002DC0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002DC1")]
		[FieldOffset(Offset = "0x20")]
		public int requestId;

		[Token(Token = "0x4002DC2")]
		[FieldOffset(Offset = "0x24")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000EEA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60055ED")]
			[Address(RVA = "0x5CE0BA0", Offset = "0x5CDFBA0", VA = "0x5CE0BA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000EEB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60055EF")]
			[Address(RVA = "0x5CE0BF0", Offset = "0x5CDFBF0", VA = "0x5CE0BF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60055EA")]
		[Address(RVA = "0x5CE08C0", Offset = "0x5CDF8C0", VA = "0x5CE08C0")]
		[DebuggerHidden]
		public _003CRefreshUIAfterResolutionChange_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60055EB")]
		[Address(RVA = "0x5CE0990", Offset = "0x5CDF990", VA = "0x5CE0990", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60055EC")]
		[Address(RVA = "0x5CE09A0", Offset = "0x5CDF9A0", VA = "0x5CE09A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60055EE")]
		[Address(RVA = "0x5CE0BB0", Offset = "0x5CDFBB0", VA = "0x5CE0BB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002DB7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int[] ShortSideOptions;

	[Token(Token = "0x4002DB8")]
	private const float InputReferenceShortSide = 1080f;

	[Token(Token = "0x4002DB9")]
	[FieldOffset(Offset = "0x8")]
	private static int _nativeWidth;

	[Token(Token = "0x4002DBA")]
	[FieldOffset(Offset = "0xC")]
	private static int _nativeHeight;

	[Token(Token = "0x4002DBB")]
	[FieldOffset(Offset = "0x10")]
	private static int _lastScreenWidth;

	[Token(Token = "0x4002DBC")]
	[FieldOffset(Offset = "0x14")]
	private static int _lastScreenHeight;

	[Token(Token = "0x4002DBD")]
	[FieldOffset(Offset = "0x18")]
	private static float _resolutionInputScale;

	[Token(Token = "0x4002DBE")]
	[FieldOffset(Offset = "0x1C")]
	private static int _uiRefreshRequestId;

	[Token(Token = "0x60055E1")]
	[Address(RVA = "0x5CDFC20", Offset = "0x5CDEC20", VA = "0x5CDFC20")]
	public static List<Resolution> GetResolutions()
	{
		return null;
	}

	[Token(Token = "0x60055E2")]
	[Address(RVA = "0x5CE0310", Offset = "0x5CDF310", VA = "0x5CE0310")]
	public static Resolution ApplyResolution(int resolutionIndex)
	{
		return default(Resolution);
	}

	[Token(Token = "0x60055E3")]
	[Address(RVA = "0x5CE07A0", Offset = "0x5CDF7A0", VA = "0x5CE07A0")]
	public static float GetResolutionInputScale()
	{
		return default(float);
	}

	[Token(Token = "0x60055E4")]
	[Address(RVA = "0x5CE01A0", Offset = "0x5CDF1A0", VA = "0x5CE01A0")]
	private static void AddResolution(List<Resolution> resolutions, HashSet<string> found, int width, int height)
	{
	}

	[Token(Token = "0x60055E5")]
	[Address(RVA = "0x5CE00C0", Offset = "0x5CDF0C0", VA = "0x5CE00C0")]
	private static void CacheNativeResolution(int width, int height)
	{
	}

	[Token(Token = "0x60055E6")]
	[Address(RVA = "0x5CE0520", Offset = "0x5CDF520", VA = "0x5CE0520")]
	private static void RefreshResolutionInputScale()
	{
	}

	[Token(Token = "0x60055E7")]
	[Address(RVA = "0x5CE06A0", Offset = "0x5CDF6A0", VA = "0x5CE06A0")]
	private static void ScheduleUIRefreshAfterResolutionChange()
	{
	}

	[Token(Token = "0x60055E8")]
	[Address(RVA = "0x5CE0860", Offset = "0x5CDF860", VA = "0x5CE0860")]
	[IteratorStateMachine(typeof(_003CRefreshUIAfterResolutionChange_003Ed__15))]
	private static IEnumerator RefreshUIAfterResolutionChange(int requestId)
	{
		return null;
	}
}
