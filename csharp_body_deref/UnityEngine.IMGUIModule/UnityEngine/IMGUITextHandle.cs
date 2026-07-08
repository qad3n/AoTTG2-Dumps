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
		[Address(RVA = "0x4B35370", Offset = "0x4B35370", VA = "0x4B35370")]
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
	[Address(RVA = "0x4B33390", Offset = "0x4B33390", VA = "0x4B33390")]
	internal static void EmptyManagedCache()
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4B329F0", Offset = "0x4B329F0", VA = "0x4B329F0")]
	internal static IMGUITextHandle GetTextHandle(GUIStyle style, Rect position, string content, Color32 textColor)
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x4B331D0", Offset = "0x4B331D0", VA = "0x4B331D0")]
	internal static IMGUITextHandle GetTextHandle(GUIStyle style, Rect position, string content, Color32 textColor, ref bool isCached)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4B35030", Offset = "0x4B35030", VA = "0x4B35030")]
	private static void ClearUnusedTextHandles()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4B34C90", Offset = "0x4B34C90", VA = "0x4B34C90")]
	private static IMGUITextHandle GetTextHandle(UnityEngine.TextCore.Text.TextGenerationSettings settings, bool isCalledFromNative, ref bool isCached)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4B317B0", Offset = "0x4B317B0", VA = "0x4B317B0")]
	internal static float GetLineHeight(GUIStyle style)
	{
		return default(float);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4B32D70", Offset = "0x4B32D70", VA = "0x4B32D70")]
	internal Vector2 GetPreferredSize()
	{
		return default(Vector2);
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4B346D0", Offset = "0x4B346D0", VA = "0x4B346D0")]
	private static void ConvertGUIStyleToGenerationSettings(UnityEngine.TextCore.Text.TextGenerationSettings settings, GUIStyle style, Color textColor, string text, Rect rect)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4B35270", Offset = "0x4B35270", VA = "0x4B35270")]
	private static UnityEngine.TextCore.Text.TextOverflowMode LegacyClippingToNewOverflow(TextClipping clipping)
	{
		return default(UnityEngine.TextCore.Text.TextOverflowMode);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4B35210", Offset = "0x4B35210", VA = "0x4B35210")]
	public IMGUITextHandle()
	{
	}
}
