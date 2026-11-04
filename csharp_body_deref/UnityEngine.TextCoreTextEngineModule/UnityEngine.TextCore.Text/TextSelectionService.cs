// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextSelectionService
// Update status: NEW in this game update
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
	[Address(RVA = "0x3054720", Offset = "0x3052D20", VA = "0x183054720")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::Substring")]
	internal static string Substring(IntPtr textGenerationInfo, int startIndex, int endIndex)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x3054540", Offset = "0x3052B40", VA = "0x183054540")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::SelectCurrentWord")]
	internal static extern void SelectCurrentWord(IntPtr textGenerationInfo, int currentIndex, ref int startIndex, ref int endIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x30544A0", Offset = "0x3052AA0", VA = "0x1830544A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::PreviousCodePointIndex")]
	internal static extern int PreviousCodePointIndex(IntPtr textGenerationInfo, int currentIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x3054460", Offset = "0x3052A60", VA = "0x183054460")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::NextCodePointIndex")]
	internal static extern int NextCodePointIndex(IntPtr textGenerationInfo, int currentIndex);

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x3054040", Offset = "0x3052640", VA = "0x183054040")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetCursorLogicalIndexFromPosition")]
	internal static int GetCursorLogicalIndexFromPosition(IntPtr textGenerationInfo, Vector2 position)
	{
		return default(int);
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x30540D0", Offset = "0x30526D0", VA = "0x1830540D0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetCursorPositionFromLogicalIndex")]
	internal static Vector2 GetCursorPositionFromLogicalIndex(IntPtr textGenerationInfo, int logicalIndex)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x3054420", Offset = "0x3052A20", VA = "0x183054420")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::LineUpCharacterPosition")]
	internal static extern int LineUpCharacterPosition(IntPtr textGenerationInfo, int originalPos);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x30543E0", Offset = "0x30529E0", VA = "0x1830543E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::LineDownCharacterPosition")]
	internal static extern int LineDownCharacterPosition(IntPtr textGenerationInfo, int originalPos);

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x3054200", Offset = "0x3052800", VA = "0x183054200")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetHighlightRectangles")]
	internal static Rect[] GetHighlightRectangles(IntPtr textGenerationInfo, int cursorIndex, int selectIndex)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x3053FB0", Offset = "0x30525B0", VA = "0x183053FB0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetCharacterHeightFromIndex")]
	internal static extern float GetCharacterHeightFromIndex(IntPtr textGenerationInfo, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x30543A0", Offset = "0x30529A0", VA = "0x1830543A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetStartOfNextWord")]
	internal static extern int GetStartOfNextWord(IntPtr textGenerationInfo, int currentIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x3054130", Offset = "0x3052730", VA = "0x183054130")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetEndOfPreviousWord")]
	internal static extern int GetEndOfPreviousWord(IntPtr textGenerationInfo, int currentIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x3054170", Offset = "0x3052770", VA = "0x183054170")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetFirstCharacterIndexOnLine")]
	internal static extern int GetFirstCharacterIndexOnLine(IntPtr textGenerationInfo, int currentIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x30542E0", Offset = "0x30528E0", VA = "0x1830542E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetLastCharacterIndexOnLine")]
	internal static extern int GetLastCharacterIndexOnLine(IntPtr textGenerationInfo, int currentIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x3054320", Offset = "0x3052920", VA = "0x183054320")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetLineHeight")]
	internal static extern float GetLineHeight(IntPtr textGenerationInfo, int lineIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x3054360", Offset = "0x3052960", VA = "0x183054360")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::GetLineNumberFromLogicalIndex")]
	internal static extern int GetLineNumber(IntPtr textGenerationInfo, int logicalIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x3054630", Offset = "0x3052C30", VA = "0x183054630")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::SelectToPreviousParagraph")]
	internal static extern void SelectToPreviousParagraph(IntPtr textGenerationInfo, ref int cursorIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x3054680", Offset = "0x3052C80", VA = "0x183054680")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::SelectToStartOfParagraph")]
	internal static extern void SelectToStartOfParagraph(IntPtr textGenerationInfo, ref int cursorIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x3054590", Offset = "0x3052B90", VA = "0x183054590")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::SelectToEndOfParagraph")]
	internal static extern void SelectToEndOfParagraph(IntPtr textGenerationInfo, ref int cursorIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x30545E0", Offset = "0x3052BE0", VA = "0x1830545E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::SelectToNextParagraph")]
	internal static extern void SelectToNextParagraph(IntPtr textGenerationInfo, ref int cursorIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x30544E0", Offset = "0x3052AE0", VA = "0x1830544E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextSelectionService::SelectCurrentParagraph")]
	internal static extern void SelectCurrentParagraph(IntPtr textGenerationInfo, ref int cursorIndex, ref int selectIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x30546D0", Offset = "0x3052CD0", VA = "0x1830546D0")]
	private static extern void Substring_Injected(IntPtr textGenerationInfo, int startIndex, int endIndex, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x3053FF0", Offset = "0x30525F0", VA = "0x183053FF0")]
	private static extern int GetCursorLogicalIndexFromPosition_Injected(IntPtr textGenerationInfo, [In] ref Vector2 position);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x3054080", Offset = "0x3052680", VA = "0x183054080")]
	private static extern void GetCursorPositionFromLogicalIndex_Injected(IntPtr textGenerationInfo, int logicalIndex, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x30541B0", Offset = "0x30527B0", VA = "0x1830541B0")]
	private static extern void GetHighlightRectangles_Injected(IntPtr textGenerationInfo, int cursorIndex, int selectIndex, out UnityEngine.Bindings.BlittableArrayWrapper ret);
}
