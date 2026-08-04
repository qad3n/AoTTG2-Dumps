// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.IMGUITextHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.TextCore.Text;

namespace UnityEngine;

[Token(Token = "0x200001F")]
internal class IMGUITextHandle : UnityEngine.TextCore.Text.TextHandle
{
	[Token(Token = "0x2000020")]
	internal class TextHandleTuple
	{
		[Token(Token = "0x40000CB")]
		[FieldOffset(Offset = "0x10")]
		public float lastTimeUsed;

		[Token(Token = "0x40000CC")]
		[FieldOffset(Offset = "0x14")]
		public int hashCode;

		[Token(Token = "0x600020F")]
		[Address(RVA = "0x4E5CF30", Offset = "0x4E5CF30", VA = "0x4E5CF30")]
		public TextHandleTuple(float lastTimeUsed, int hashCode)
		{
		}
	}

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x40")]
	internal LinkedListNode<TextHandleTuple> tuple;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<int, IMGUITextHandle> textHandles;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x8")]
	private static LinkedList<TextHandleTuple> textHandlesTuple;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x10")]
	private static float lastCleanupTime;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x48")]
	internal bool isCachedOnNative;

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x4E5AF50", Offset = "0x4E5AF50", VA = "0x4E5AF50")]
	internal static void EmptyManagedCache()
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4E5A5B0", Offset = "0x4E5A5B0", VA = "0x4E5A5B0")]
	internal static IMGUITextHandle GetTextHandle(GUIStyle style, Rect position, string content, Color32 textColor)
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x4E5AD90", Offset = "0x4E5AD90", VA = "0x4E5AD90")]
	internal static IMGUITextHandle GetTextHandle(GUIStyle style, Rect position, string content, Color32 textColor, ref bool isCached)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4E5CBF0", Offset = "0x4E5CBF0", VA = "0x4E5CBF0")]
	private static void ClearUnusedTextHandles()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4E5C850", Offset = "0x4E5C850", VA = "0x4E5C850")]
	private static IMGUITextHandle GetTextHandle(UnityEngine.TextCore.Text.TextGenerationSettings settings, bool isCalledFromNative, ref bool isCached)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4E59370", Offset = "0x4E59370", VA = "0x4E59370")]
	internal static float GetLineHeight(GUIStyle style)
	{
		return default(float);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4E5A930", Offset = "0x4E5A930", VA = "0x4E5A930")]
	internal Vector2 GetPreferredSize()
	{
		return default(Vector2);
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4E5C290", Offset = "0x4E5C290", VA = "0x4E5C290")]
	private static void ConvertGUIStyleToGenerationSettings(UnityEngine.TextCore.Text.TextGenerationSettings settings, GUIStyle style, Color textColor, string text, Rect rect)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4E5CE30", Offset = "0x4E5CE30", VA = "0x4E5CE30")]
	private static UnityEngine.TextCore.Text.TextOverflowMode LegacyClippingToNewOverflow(TextClipping clipping)
	{
		return default(UnityEngine.TextCore.Text.TextOverflowMode);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4E5CDD0", Offset = "0x4E5CDD0", VA = "0x4E5CDD0")]
	public IMGUITextHandle()
	{
	}
}
