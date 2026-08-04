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

[Token(Token = "0x20000A5")]
public class TMP_UpdateManager
{
	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_UpdateManager s_Instance;

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x10")]
	private readonly HashSet<int> m_LayoutQueueLookup;

	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<TMP_Text> m_LayoutRebuildQueue;

	[Token(Token = "0x40005FD")]
	[FieldOffset(Offset = "0x20")]
	private readonly HashSet<int> m_GraphicQueueLookup;

	[Token(Token = "0x40005FE")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<TMP_Text> m_GraphicRebuildQueue;

	[Token(Token = "0x40005FF")]
	[FieldOffset(Offset = "0x30")]
	private readonly HashSet<int> m_InternalUpdateLookup;

	[Token(Token = "0x4000600")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<TMP_Text> m_InternalUpdateQueue;

	[Token(Token = "0x4000601")]
	[FieldOffset(Offset = "0x40")]
	private readonly HashSet<int> m_CullingUpdateLookup;

	[Token(Token = "0x4000602")]
	[FieldOffset(Offset = "0x48")]
	private readonly List<TMP_Text> m_CullingUpdateQueue;

	[Token(Token = "0x4000603")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_RegisterTextObjectForUpdateMarker;

	[Token(Token = "0x4000604")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_RegisterTextElementForGraphicRebuildMarker;

	[Token(Token = "0x4000605")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_RegisterTextElementForCullingUpdateMarker;

	[Token(Token = "0x4000606")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_UnregisterTextObjectForUpdateMarker;

	[Token(Token = "0x4000607")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_UnregisterTextElementForGraphicRebuildMarker;

	[Token(Token = "0x17000171")]
	private static TMP_UpdateManager instance
	{
		[Token(Token = "0x6000634")]
		[Address(RVA = "0x4C9C510", Offset = "0x4C9C510", VA = "0x4C9C510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x4C9C5F0", Offset = "0x4C9C5F0", VA = "0x4C9C5F0")]
	private TMP_UpdateManager()
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x4C9C800", Offset = "0x4C9C800", VA = "0x4C9C800")]
	internal static void RegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x4C9C870", Offset = "0x4C9C870", VA = "0x4C9C870")]
	private void InternalRegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x4C9C970", Offset = "0x4C9C970", VA = "0x4C9C970")]
	public static void RegisterTextElementForLayoutRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x4C9C9E0", Offset = "0x4C9C9E0", VA = "0x4C9C9E0")]
	private void InternalRegisterTextElementForLayoutRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x4C9CAE0", Offset = "0x4C9CAE0", VA = "0x4C9CAE0")]
	public static void RegisterTextElementForGraphicRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x4C9CB50", Offset = "0x4C9CB50", VA = "0x4C9CB50")]
	private void InternalRegisterTextElementForGraphicRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x4C9CC50", Offset = "0x4C9CC50", VA = "0x4C9CC50")]
	public static void RegisterTextElementForCullingUpdate(TMP_Text element)
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x4C9CCC0", Offset = "0x4C9CCC0", VA = "0x4C9CCC0")]
	private void InternalRegisterTextElementForCullingUpdate(TMP_Text element)
	{
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x4C9CDC0", Offset = "0x4C9CDC0", VA = "0x4C9CDC0")]
	private void OnCameraPreCull()
	{
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x4C9CDD0", Offset = "0x4C9CDD0", VA = "0x4C9CDD0")]
	private void DoRebuilds()
	{
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x4C9D020", Offset = "0x4C9D020", VA = "0x4C9D020")]
	internal static void UnRegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x4C9D120", Offset = "0x4C9D120", VA = "0x4C9D120")]
	public static void UnRegisterTextElementForRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x4C9D1C0", Offset = "0x4C9D1C0", VA = "0x4C9D1C0")]
	private void InternalUnRegisterTextElementForGraphicRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x4C9D250", Offset = "0x4C9D250", VA = "0x4C9D250")]
	private void InternalUnRegisterTextElementForLayoutRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x4C9D090", Offset = "0x4C9D090", VA = "0x4C9D090")]
	private void InternalUnRegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}
}
