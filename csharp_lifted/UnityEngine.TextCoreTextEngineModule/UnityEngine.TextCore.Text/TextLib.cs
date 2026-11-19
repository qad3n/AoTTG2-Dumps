// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextLib
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200005A")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "Unity.UIElements.PlayModeTests" })]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreTextEngine/Native/TextLib.h")]
internal class TextLib
{
	[Token(Token = "0x200005B")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600029C")]
		[Address(RVA = "0x6A4E340", Offset = "0x6A4D340", VA = "0x6A4E340")]
		public static IntPtr ConvertToNative(TextLib textLib)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000394")]
	public const int k_unconstrainedScreenSize = -1;

	[Token(Token = "0x4000395")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly IntPtr m_Ptr;

	[Token(Token = "0x4000396")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static Func<UnityEngine.TextAsset> GetICUAssetEditorDelegate;

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x6A4CC80", Offset = "0x6A4BC80", VA = "0x6A4CC80")]
	public TextLib(byte[] icuData)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x6A4CCB0", Offset = "0x6A4BCB0", VA = "0x6A4CCB0")]
	private static IntPtr GetInstance(byte[] icuData)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x6A4CDA0", Offset = "0x6A4BDA0", VA = "0x6A4CDA0")]
	public NativeTextInfo GenerateText(NativeTextGenerationSettings settings, IntPtr textGenerationInfo, ref bool wasCached)
	{
		return default(NativeTextInfo);
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x6A4CFC0", Offset = "0x6A4BFC0", VA = "0x6A4CFC0")]
	public bool HasMissingGlyphs(NativeTextInfo textInfo, ref Dictionary<int, HashSet<uint>> missingGlyphsPerFontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x6A4D350", Offset = "0x6A4C350", VA = "0x6A4D350")]
	public void ProcessMeshInfos(NativeTextInfo textInfo, NativeTextGenerationSettings settings, ref List<List<List<int>>> textElementIndicesByMesh, ref List<bool> hasMultipleColorsByMesh, bool uvsAreGenerated)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x6A4E070", Offset = "0x6A4D070", VA = "0x6A4E070")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public void ShapeText(NativeTextGenerationSettings settings, IntPtr textGenerationInfo)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x6A4CF10", Offset = "0x6A4BF10", VA = "0x6A4CF10")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextLib::GenerateTextMesh", IsThreadSafe = true)]
	private NativeTextInfo GenerateTextInternal(NativeTextGenerationSettings settings, IntPtr textGenerationInfo, ref bool uvsAreGenerated)
	{
		return default(NativeTextInfo);
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x6A4E180", Offset = "0x6A4D180", VA = "0x6A4E180")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextLib::MeasureText")]
	public Vector2 MeasureText(NativeTextGenerationSettings settings, IntPtr textGenerationInfo)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x6A4E260", Offset = "0x6A4D260", VA = "0x6A4E260")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextLib::FindIntersectingLink")]
	public static int FindIntersectingLink(Vector2 point, IntPtr textGenerationInfo)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000295")]
	[Address(RVA = "0x6A4E2E0", Offset = "0x6A4D2E0", VA = "0x6A4E2E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextLib::GetCharacterCount")]
	public static extern int GetCharacterCount(IntPtr textGenerationInfo);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000296")]
	[Address(RVA = "0x6A4E310", Offset = "0x6A4D310", VA = "0x6A4E310")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextLib::IsMainDirectionRTL")]
	public static extern bool IsMainDirectionRTL(IntPtr textGenerationInfo);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000297")]
	[Address(RVA = "0x6A4CD70", Offset = "0x6A4BD70", VA = "0x6A4CD70")]
	private static extern IntPtr GetInstance_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper icuData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000298")]
	[Address(RVA = "0x6A4E0E0", Offset = "0x6A4D0E0", VA = "0x6A4E0E0")]
	private static extern void ShapeText_Injected(IntPtr _unity_self, [In] ref NativeTextGenerationSettings settings, IntPtr textGenerationInfo);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000299")]
	[Address(RVA = "0x6A4E120", Offset = "0x6A4D120", VA = "0x6A4E120")]
	private static extern void GenerateTextInternal_Injected(IntPtr _unity_self, [In] ref NativeTextGenerationSettings settings, IntPtr textGenerationInfo, ref bool uvsAreGenerated, out NativeTextInfo ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600029A")]
	[Address(RVA = "0x6A4E210", Offset = "0x6A4D210", VA = "0x6A4E210")]
	private static extern void MeasureText_Injected(IntPtr _unity_self, [In] ref NativeTextGenerationSettings settings, IntPtr textGenerationInfo, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600029B")]
	[Address(RVA = "0x6A4E2A0", Offset = "0x6A4D2A0", VA = "0x6A4E2A0")]
	private static extern int FindIntersectingLink_Injected([In] ref Vector2 point, IntPtr textGenerationInfo);
}
