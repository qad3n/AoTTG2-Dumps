// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextLib
// Update status: NEW in this game update
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
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
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
	[Address(RVA = "0x3053ED0", Offset = "0x30524D0", VA = "0x183053ED0")]
	public TextLib(byte[] icuData)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x3052B70", Offset = "0x3051170", VA = "0x183052B70")]
	private static IntPtr GetInstance(byte[] icuData)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x3052960", Offset = "0x3050F60", VA = "0x183052960")]
	public NativeTextInfo GenerateText(NativeTextGenerationSettings settings, IntPtr textGenerationInfo, ref bool wasCached)
	{
		return default(NativeTextInfo);
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x3052C30", Offset = "0x3051230", VA = "0x183052C30")]
	public bool HasMissingGlyphs(NativeTextInfo textInfo, ref Dictionary<int, HashSet<uint>> missingGlyphsPerFontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x30530E0", Offset = "0x30516E0", VA = "0x1830530E0")]
	public void ProcessMeshInfos(NativeTextInfo textInfo, NativeTextGenerationSettings settings, ref List<List<List<int>>> textElementIndicesByMesh, ref List<bool> hasMultipleColorsByMesh, bool uvsAreGenerated)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x3053E60", Offset = "0x3052460", VA = "0x183053E60")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	public void ShapeText(NativeTextGenerationSettings settings, IntPtr textGenerationInfo)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x30528C0", Offset = "0x3050EC0", VA = "0x1830528C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextLib::GenerateTextMesh", IsThreadSafe = true)]
	private NativeTextInfo GenerateTextInternal(NativeTextGenerationSettings settings, IntPtr textGenerationInfo, ref bool uvsAreGenerated)
	{
		return default(NativeTextInfo);
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x3053060", Offset = "0x3051660", VA = "0x183053060")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextLib::MeasureText")]
	public Vector2 MeasureText(NativeTextGenerationSettings settings, IntPtr textGenerationInfo)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x3052830", Offset = "0x3050E30", VA = "0x183052830")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextLib::FindIntersectingLink")]
	public static int FindIntersectingLink(Vector2 point, IntPtr textGenerationInfo)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000295")]
	[Address(RVA = "0x3052AF0", Offset = "0x30510F0", VA = "0x183052AF0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextLib::GetCharacterCount")]
	public static extern int GetCharacterCount(IntPtr textGenerationInfo);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000296")]
	[Address(RVA = "0x3052FD0", Offset = "0x30515D0", VA = "0x183052FD0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextLib::IsMainDirectionRTL")]
	public static extern bool IsMainDirectionRTL(IntPtr textGenerationInfo);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000297")]
	[Address(RVA = "0x3052B30", Offset = "0x3051130", VA = "0x183052B30")]
	private static extern IntPtr GetInstance_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper icuData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000298")]
	[Address(RVA = "0x3053E00", Offset = "0x3052400", VA = "0x183053E00")]
	private static extern void ShapeText_Injected(IntPtr _unity_self, [In] ref NativeTextGenerationSettings settings, IntPtr textGenerationInfo);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000299")]
	[Address(RVA = "0x3052870", Offset = "0x3050E70", VA = "0x183052870")]
	private static extern void GenerateTextInternal_Injected(IntPtr _unity_self, [In] ref NativeTextGenerationSettings settings, IntPtr textGenerationInfo, ref bool uvsAreGenerated, out NativeTextInfo ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600029A")]
	[Address(RVA = "0x3053010", Offset = "0x3051610", VA = "0x183053010")]
	private static extern void MeasureText_Injected(IntPtr _unity_self, [In] ref NativeTextGenerationSettings settings, IntPtr textGenerationInfo, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600029B")]
	[Address(RVA = "0x30527E0", Offset = "0x3050DE0", VA = "0x1830527E0")]
	private static extern int FindIntersectingLink_Injected([In] ref Vector2 point, IntPtr textGenerationInfo);
}
