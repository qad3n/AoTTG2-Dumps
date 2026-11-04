// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.IMGUITextHandle
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.TextCore.Text;

namespace UnityEngine;

[Token(Token = "0x2000022")]
internal class IMGUITextHandle : UnityEngine.TextCore.Text.TextHandle
{
	[Token(Token = "0x2000023")]
	internal class TextHandleTuple
	{
		[Token(Token = "0x40000D1")]
		[FieldOffset(Offset = "0x10")]
		public float lastTimeUsed;

		[Token(Token = "0x40000D2")]
		[FieldOffset(Offset = "0x14")]
		public int hashCode;

		[Token(Token = "0x6000263")]
		[Address(RVA = "0x2FA6610", Offset = "0x2FA4C10", VA = "0x182FA6610")]
		public TextHandleTuple(float lastTimeUsed, int hashCode)
		{
		}
	}

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0xC8")]
	internal LinkedListNode<TextHandleTuple> tuple;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<int, IMGUITextHandle> textHandles;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x8")]
	private static LinkedList<TextHandleTuple> textHandlesTuple;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x10")]
	private static float lastCleanupTime;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x14")]
	private static int newHandlesSinceCleanup;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0xD0")]
	internal bool isCachedOnNative;

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x2FA54A0", Offset = "0x2FA3AA0", VA = "0x182FA54A0")]
	internal static void EmptyManagedCache()
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x2FA58B0", Offset = "0x2FA3EB0", VA = "0x182FA58B0")]
	internal static IMGUITextHandle GetTextHandle(GUIStyle style, Rect position, string content, Color32 textColor)
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x2FA5730", Offset = "0x2FA3D30", VA = "0x182FA5730")]
	internal static IMGUITextHandle GetTextHandle(GUIStyle style, Rect position, string content, Color32 textColor, ref bool isCached)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x2FA5E80", Offset = "0x2FA4480", VA = "0x182FA5E80")]
	private static bool ShouldCleanup(float currentTime, float lastTime, float cleanupThreshold)
	{
		return default(bool);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x2FA4A00", Offset = "0x2FA3000", VA = "0x182FA4A00")]
	private static void ClearUnusedTextHandles()
	{
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x2FA5A40", Offset = "0x2FA4040", VA = "0x182FA5A40")]
	private static IMGUITextHandle GetTextHandle(UnityEngine.TextCore.Text.TextGenerationSettings settings, bool isCalledFromNative, ref bool isCached)
	{
		return null;
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x2FA56D0", Offset = "0x2FA3CD0", VA = "0x182FA56D0", Slot = "4")]
	protected override float GetPixelsPerPoint()
	{
		return default(float);
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x2FA5540", Offset = "0x2FA3B40", VA = "0x182FA5540")]
	internal static float GetLineHeight(GUIStyle style)
	{
		return default(float);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x2FA4C70", Offset = "0x2FA3270", VA = "0x182FA4C70")]
	private static void ConvertGUIStyleToGenerationSettings(UnityEngine.TextCore.Text.TextGenerationSettings settings, GUIStyle style, Color textColor, string text, Rect rect)
	{
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x2FA5E60", Offset = "0x2FA4460", VA = "0x182FA5E60")]
	private static UnityEngine.TextCore.Text.TextOverflowMode LegacyClippingToNewOverflow(TextClipping clipping)
	{
		return default(UnityEngine.TextCore.Text.TextOverflowMode);
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0", Slot = "10")]
	internal override bool IsAdvancedTextEnabledForElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x2FA5FA0", Offset = "0x2FA45A0", VA = "0x182FA5FA0")]
	public IMGUITextHandle()
	{
	}
}
