using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Profiling;

namespace TMPro;

[Token(Token = "0x200008F")]
public class TMP_UpdateManager
{
	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_UpdateManager s_Instance;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x10")]
	private readonly HashSet<int> m_LayoutQueueLookup;

	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<TMP_Text> m_LayoutRebuildQueue;

	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x20")]
	private readonly HashSet<int> m_GraphicQueueLookup;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<TMP_Text> m_GraphicRebuildQueue;

	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x30")]
	private readonly HashSet<int> m_InternalUpdateLookup;

	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<TMP_Text> m_InternalUpdateQueue;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x40")]
	private readonly HashSet<int> m_CullingUpdateLookup;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x48")]
	private readonly List<TMP_Text> m_CullingUpdateQueue;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_RegisterTextObjectForUpdateMarker;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_RegisterTextElementForGraphicRebuildMarker;

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_RegisterTextElementForCullingUpdateMarker;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_UnregisterTextObjectForUpdateMarker;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_UnregisterTextElementForGraphicRebuildMarker;

	[Token(Token = "0x17000150")]
	private static TMP_UpdateManager instance
	{
		[Token(Token = "0x6000543")]
		[Address(RVA = "0x49641D0", Offset = "0x49641D0", VA = "0x49641D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x49642B0", Offset = "0x49642B0", VA = "0x49642B0")]
	private TMP_UpdateManager()
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x49644C0", Offset = "0x49644C0", VA = "0x49644C0")]
	internal static void RegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x4964530", Offset = "0x4964530", VA = "0x4964530")]
	private void InternalRegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x4964630", Offset = "0x4964630", VA = "0x4964630")]
	public static void RegisterTextElementForLayoutRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x49646A0", Offset = "0x49646A0", VA = "0x49646A0")]
	private void InternalRegisterTextElementForLayoutRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x49647A0", Offset = "0x49647A0", VA = "0x49647A0")]
	public static void RegisterTextElementForGraphicRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x4964810", Offset = "0x4964810", VA = "0x4964810")]
	private void InternalRegisterTextElementForGraphicRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4964910", Offset = "0x4964910", VA = "0x4964910")]
	public static void RegisterTextElementForCullingUpdate(TMP_Text element)
	{
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x4964980", Offset = "0x4964980", VA = "0x4964980")]
	private void InternalRegisterTextElementForCullingUpdate(TMP_Text element)
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x4964A80", Offset = "0x4964A80", VA = "0x4964A80")]
	private void OnCameraPreCull()
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x4964A90", Offset = "0x4964A90", VA = "0x4964A90")]
	private void DoRebuilds()
	{
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x4964CE0", Offset = "0x4964CE0", VA = "0x4964CE0")]
	internal static void UnRegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x4964DE0", Offset = "0x4964DE0", VA = "0x4964DE0")]
	public static void UnRegisterTextElementForRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x4964E80", Offset = "0x4964E80", VA = "0x4964E80")]
	private void InternalUnRegisterTextElementForGraphicRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x4964F10", Offset = "0x4964F10", VA = "0x4964F10")]
	private void InternalUnRegisterTextElementForLayoutRebuild(TMP_Text element)
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x4964D50", Offset = "0x4964D50", VA = "0x4964D50")]
	private void InternalUnRegisterTextObjectForUpdate(TMP_Text textObject)
	{
	}
}
