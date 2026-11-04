// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_UpdateManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Profiling;

namespace TMPro;

[Token(Token = "0x20000A1")]
public class TMP_UpdateManager
{
	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_UpdateManager s_Instance;

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x10")]
	private readonly HashSet<int> m_LayoutQueueLookup;

	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<TMP_Text> m_LayoutRebuildQueue;

	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0x20")]
	private readonly HashSet<int> m_GraphicQueueLookup;

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<TMP_Text> m_GraphicRebuildQueue;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0x30")]
	private readonly HashSet<int> m_InternalUpdateLookup;

	[Token(Token = "0x400058D")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<TMP_Text> m_InternalUpdateQueue;

	[Token(Token = "0x400058E")]
	[FieldOffset(Offset = "0x40")]
	private readonly HashSet<int> m_CullingUpdateLookup;

	[Token(Token = "0x400058F")]
	[FieldOffset(Offset = "0x48")]
	private readonly List<TMP_Text> m_CullingUpdateQueue;

	[Token(Token = "0x4000590")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_RegisterTextObjectForUpdateMarker;

	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_RegisterTextElementForGraphicRebuildMarker;

	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_RegisterTextElementForCullingUpdateMarker;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_UnregisterTextObjectForUpdateMarker;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_UnregisterTextElementForGraphicRebuildMarker;

	[Token(Token = "0x17000187")]
	private static TMP_UpdateManager instance
	{
		[Token(Token = "0x6000610")]
		[Address(RVA = "0x2D68120", Offset = "0x2D66720", VA = "0x182D68120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x2D67F00", Offset = "0x2D66500", VA = "0x182D67F00")]
	private TMP_UpdateManager()
	{
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x2D67A10", Offset = "0x2D66010", VA = "0x182D67A10")]
	internal static void RegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x2D67460", Offset = "0x2D65A60", VA = "0x182D67460")]
	private void InternalRegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x2D67910", Offset = "0x2D65F10", VA = "0x182D67910")]
	public static void RegisterTextElementForLayoutRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x2D673A0", Offset = "0x2D659A0", VA = "0x182D673A0")]
	private void InternalRegisterTextElementForLayoutRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x2D67810", Offset = "0x2D65E10", VA = "0x182D67810")]
	public static void RegisterTextElementForGraphicRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x2D672E0", Offset = "0x2D658E0", VA = "0x182D672E0")]
	private void InternalRegisterTextElementForGraphicRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x2D67710", Offset = "0x2D65D10", VA = "0x182D67710")]
	public static void RegisterTextElementForCullingUpdate(TMP_Text element)
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x2D67220", Offset = "0x2D65820", VA = "0x182D67220")]
	private void InternalRegisterTextElementForCullingUpdate(TMP_Text element)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x2D67700", Offset = "0x2D65D00", VA = "0x182D67700")]
	private void OnCameraPreCull()
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x2D66F30", Offset = "0x2D65530", VA = "0x182D66F30")]
	private void DoRebuilds()
	{
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x2D67CE0", Offset = "0x2D662E0", VA = "0x182D67CE0")]
	internal static void UnRegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x2D67B10", Offset = "0x2D66110", VA = "0x182D67B10")]
	public static void UnRegisterTextElementForRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x2D67520", Offset = "0x2D65B20", VA = "0x182D67520")]
	private void InternalUnRegisterTextElementForGraphicRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x2D675C0", Offset = "0x2D65BC0", VA = "0x182D675C0")]
	private void InternalUnRegisterTextElementForLayoutRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x2D67660", Offset = "0x2D65C60", VA = "0x182D67660")]
	private void InternalUnRegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}
}
