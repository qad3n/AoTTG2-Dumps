// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextSelectionService
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200005D")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "Unity.UIElements.PlayModeTests" })]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreTextEngine/Native/TextSelectionService.h")]
internal class TextSelectionService
{
	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x6A4E510", Offset = "0x6A4D510", VA = "0x6A4E510")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::Substring")]
	internal static string Substring(IntPtr textGenerationInfo, int startIndex, int endIndex)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x6A4E640", Offset = "0x6A4D640", VA = "0x6A4E640")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::SelectCurrentWord")]
	internal static extern void SelectCurrentWord(IntPtr textGenerationInfo, int currentIndex, ref int startIndex, ref int endIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x6A4E690", Offset = "0x6A4D690", VA = "0x6A4E690")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::PreviousCodePointIndex")]
	internal static extern int PreviousCodePointIndex(IntPtr textGenerationInfo, int currentIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x6A4E6D0", Offset = "0x6A4D6D0", VA = "0x6A4E6D0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::NextCodePointIndex")]
	internal static extern int NextCodePointIndex(IntPtr textGenerationInfo, int currentIndex);

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x6A4E710", Offset = "0x6A4D710", VA = "0x6A4E710")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetCursorLogicalIndexFromPosition")]
	internal static int GetCursorLogicalIndexFromPosition(IntPtr textGenerationInfo, Vector2 position)
	{
		return default(int);
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x6A4E790", Offset = "0x6A4D790", VA = "0x6A4E790")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetCursorPositionFromLogicalIndex")]
	internal static Vector2 GetCursorPositionFromLogicalIndex(IntPtr textGenerationInfo, int logicalIndex)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x6A4E820", Offset = "0x6A4D820", VA = "0x6A4E820")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::LineUpCharacterPosition")]
	internal static extern int LineUpCharacterPosition(IntPtr textGenerationInfo, int originalPos);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x6A4E860", Offset = "0x6A4D860", VA = "0x6A4E860")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::LineDownCharacterPosition")]
	internal static extern int LineDownCharacterPosition(IntPtr textGenerationInfo, int originalPos);

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x6A4E8A0", Offset = "0x6A4D8A0", VA = "0x6A4E8A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetHighlightRectangles")]
	internal static Rect[] GetHighlightRectangles(IntPtr textGenerationInfo, int cursorIndex, int selectIndex)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x6A4EA00", Offset = "0x6A4DA00", VA = "0x6A4EA00")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetCharacterHeightFromIndex")]
	internal static extern float GetCharacterHeightFromIndex(IntPtr textGenerationInfo, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x6A4EA40", Offset = "0x6A4DA40", VA = "0x6A4EA40")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetStartOfNextWord")]
	internal static extern int GetStartOfNextWord(IntPtr textGenerationInfo, int currentIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x6A4EA80", Offset = "0x6A4DA80", VA = "0x6A4EA80")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetEndOfPreviousWord")]
	internal static extern int GetEndOfPreviousWord(IntPtr textGenerationInfo, int currentIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x6A4EAC0", Offset = "0x6A4DAC0", VA = "0x6A4EAC0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetFirstCharacterIndexOnLine")]
	internal static extern int GetFirstCharacterIndexOnLine(IntPtr textGenerationInfo, int currentIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x6A4EB00", Offset = "0x6A4DB00", VA = "0x6A4EB00")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetLastCharacterIndexOnLine")]
	internal static extern int GetLastCharacterIndexOnLine(IntPtr textGenerationInfo, int currentIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x6A4EB40", Offset = "0x6A4DB40", VA = "0x6A4EB40")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetLineHeight")]
	internal static extern float GetLineHeight(IntPtr textGenerationInfo, int lineIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x6A4EB80", Offset = "0x6A4DB80", VA = "0x6A4EB80")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetLineNumberFromLogicalIndex")]
	internal static extern int GetLineNumber(IntPtr textGenerationInfo, int logicalIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x6A4EBC0", Offset = "0x6A4DBC0", VA = "0x6A4EBC0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::SelectToPreviousParagraph")]
	internal static extern void SelectToPreviousParagraph(IntPtr textGenerationInfo, ref int cursorIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x6A4EC00", Offset = "0x6A4DC00", VA = "0x6A4EC00")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::SelectToStartOfParagraph")]
	internal static extern void SelectToStartOfParagraph(IntPtr textGenerationInfo, ref int cursorIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x6A4EC40", Offset = "0x6A4DC40", VA = "0x6A4EC40")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::SelectToEndOfParagraph")]
	internal static extern void SelectToEndOfParagraph(IntPtr textGenerationInfo, ref int cursorIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x6A4EC80", Offset = "0x6A4DC80", VA = "0x6A4EC80")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::SelectToNextParagraph")]
	internal static extern void SelectToNextParagraph(IntPtr textGenerationInfo, ref int cursorIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x6A4ECC0", Offset = "0x6A4DCC0", VA = "0x6A4ECC0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::SelectCurrentParagraph")]
	internal static extern void SelectCurrentParagraph(IntPtr textGenerationInfo, ref int cursorIndex, ref int selectIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x6A4E5F0", Offset = "0x6A4D5F0", VA = "0x6A4E5F0")]
	private static extern void Substring_Injected(IntPtr textGenerationInfo, int startIndex, int endIndex, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x6A4E750", Offset = "0x6A4D750", VA = "0x6A4E750")]
	private static extern int GetCursorLogicalIndexFromPosition_Injected(IntPtr textGenerationInfo, [In] ref Vector2 position);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x6A4E7E0", Offset = "0x6A4D7E0", VA = "0x6A4E7E0")]
	private static extern void GetCursorPositionFromLogicalIndex_Injected(IntPtr textGenerationInfo, int logicalIndex, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x6A4E9B0", Offset = "0x6A4D9B0", VA = "0x6A4E9B0")]
	private static extern void GetHighlightRectangles_Injected(IntPtr textGenerationInfo, int cursorIndex, int selectIndex, out UnityEngine.Bindings.BlittableArrayWrapper ret);
}
