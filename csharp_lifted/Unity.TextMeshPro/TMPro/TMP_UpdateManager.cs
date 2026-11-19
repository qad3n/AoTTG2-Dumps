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
		[Address(RVA = "0x675D5C0", Offset = "0x675C5C0", VA = "0x675D5C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x675D6A0", Offset = "0x675C6A0", VA = "0x675D6A0")]
	private TMP_UpdateManager()
	{
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x675D8B0", Offset = "0x675C8B0", VA = "0x675D8B0")]
	internal static void RegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x675D920", Offset = "0x675C920", VA = "0x675D920")]
	private void InternalRegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x675DA20", Offset = "0x675CA20", VA = "0x675DA20")]
	public static void RegisterTextElementForLayoutRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x675DA90", Offset = "0x675CA90", VA = "0x675DA90")]
	private void InternalRegisterTextElementForLayoutRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x675DB90", Offset = "0x675CB90", VA = "0x675DB90")]
	public static void RegisterTextElementForGraphicRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x675DC00", Offset = "0x675CC00", VA = "0x675DC00")]
	private void InternalRegisterTextElementForGraphicRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x675DD00", Offset = "0x675CD00", VA = "0x675DD00")]
	public static void RegisterTextElementForCullingUpdate(TMP_Text element)
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x675DD70", Offset = "0x675CD70", VA = "0x675DD70")]
	private void InternalRegisterTextElementForCullingUpdate(TMP_Text element)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x675DE70", Offset = "0x675CE70", VA = "0x675DE70")]
	private void OnCameraPreCull()
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x675DE80", Offset = "0x675CE80", VA = "0x675DE80")]
	private void DoRebuilds()
	{
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x675E0D0", Offset = "0x675D0D0", VA = "0x675E0D0")]
	internal static void UnRegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x675E1D0", Offset = "0x675D1D0", VA = "0x675E1D0")]
	public static void UnRegisterTextElementForRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x675E270", Offset = "0x675D270", VA = "0x675E270")]
	private void InternalUnRegisterTextElementForGraphicRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x675E300", Offset = "0x675D300", VA = "0x675E300")]
	private void InternalUnRegisterTextElementForLayoutRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x675E140", Offset = "0x675D140", VA = "0x675E140")]
	private void InternalUnRegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}
}
