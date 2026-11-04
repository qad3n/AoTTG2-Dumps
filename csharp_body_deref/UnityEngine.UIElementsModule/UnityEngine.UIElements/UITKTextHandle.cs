// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UITKTextHandle
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.TextCore;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000499")]
internal class UITKTextHandle : UnityEngine.TextCore.Text.TextHandle
{
	[Token(Token = "0x4000F59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal ATGTextEventHandler m_ATGTextEventHandler;

	[Token(Token = "0x4000F5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private List<(int, UnityEngine.TextCore.RichTextTagParser.TagType, string)> m_Links;

	[Token(Token = "0x4000F5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	internal Color atgHyperlinkColor;

	[Token(Token = "0x4000F5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private bool uvsAreGenerated;

	[Token(Token = "0x4000F5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static UnityEngine.TextCore.Text.TextLib s_TextLib;

	[Token(Token = "0x4000F63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	internal TextEventHandler m_TextEventHandler;

	[Token(Token = "0x4000F64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	protected TextElement m_TextElement;

	[Token(Token = "0x4000F65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly float k_MinPadding;

	[Token(Token = "0x17000941")]
	private List<(int, UnityEngine.TextCore.RichTextTagParser.TagType, string)> Links
	{
		[Token(Token = "0x6002367")]
		[Address(RVA = "0x313B0B0", Offset = "0x31396B0", VA = "0x18313B0B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000942")]
	protected internal UnityEngine.TextCore.Text.TextLib textLib
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002375")]
		[Address(RVA = "0x313B150", Offset = "0x3139750", VA = "0x18313B150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000943")]
	internal float LastPixelPerPoint
	{
		[Token(Token = "0x600237A")]
		[Address(RVA = "0x2C12040", Offset = "0x2C10640", VA = "0x182C12040")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600237B")]
		[Address(RVA = "0x313B390", Offset = "0x3139990", VA = "0x18313B390")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000944")]
	internal float? MeasuredWidth
	{
		[Token(Token = "0x600237D")]
		[Address(RVA = "0xB5B620", Offset = "0xB59C20", VA = "0x180B5B620")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600237E")]
		[Address(RVA = "0x313B3A0", Offset = "0x31399A0", VA = "0x18313B3A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000945")]
	internal float RoundedWidth
	{
		[Token(Token = "0x600237F")]
		[Address(RVA = "0x313B140", Offset = "0x3139740", VA = "0x18313B140")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002380")]
		[Address(RVA = "0x313B3B0", Offset = "0x31399B0", VA = "0x18313B3B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000946")]
	internal float? ATGMeasuredWidth
	{
		[Token(Token = "0x6002381")]
		[Address(RVA = "0x313B060", Offset = "0x3139660", VA = "0x18313B060")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002382")]
		[Address(RVA = "0x313B380", Offset = "0x3139980", VA = "0x18313B380")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000947")]
	internal float ATGRoundedWidth
	{
		[Token(Token = "0x6002383")]
		[Address(RVA = "0x5605B0", Offset = "0x55EBB0", VA = "0x1805605B0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002384")]
		[Address(RVA = "0x560620", Offset = "0x55EC20", VA = "0x180560620")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000948")]
	public override bool IsPlaceholder
	{
		[Token(Token = "0x6002393")]
		[Address(RVA = "0x313B070", Offset = "0x3139670", VA = "0x18313B070", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002368")]
	[Address(RVA = "0x3138010", Offset = "0x3136610", VA = "0x183138010")]
	private void ComputeNativeTextSize(in string textToMeasure, float width, VisualElement.MeasureMode widthMode, float height, VisualElement.MeasureMode heightMode, [Optional] float? fontsize)
	{
	}

	[Token(Token = "0x6002369")]
	[Address(RVA = "0x313AB70", Offset = "0x3139170", VA = "0x18313AB70")]
	public (UnityEngine.TextCore.Text.NativeTextInfo, bool) UpdateNative(bool generateNativeSettings = true)
	{
		return default((UnityEngine.TextCore.Text.NativeTextInfo, bool));
	}

	[Token(Token = "0x600236A")]
	[Address(RVA = "0x3137F30", Offset = "0x3136530", VA = "0x183137F30")]
	public void CacheTextGenerationInfo()
	{
	}

	[Token(Token = "0x600236B")]
	[Address(RVA = "0x313A830", Offset = "0x3138E30", VA = "0x18313A830")]
	public void ShapeText()
	{
	}

	[Token(Token = "0x600236C")]
	[Address(RVA = "0x313A560", Offset = "0x3138B60", VA = "0x18313A560")]
	public void ProcessMeshInfos(UnityEngine.TextCore.Text.NativeTextInfo textInfo, ref List<List<List<int>>> textElementIndicesByMesh, ref List<bool> hasMultipleColorsByMesh)
	{
	}

	[Token(Token = "0x600236D")]
	[Address(RVA = "0x313A360", Offset = "0x3138960", VA = "0x18313A360")]
	public bool HasMissingGlyphs(UnityEngine.TextCore.Text.NativeTextInfo textInfo, ref Dictionary<int, HashSet<uint>> missingGlyphsPerFontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x600236E")]
	[Address(RVA = "0x313B1B0", Offset = "0x31397B0", VA = "0x18313B1B0")]
	private (bool, bool) hasLinkAndHyperlink()
	{
		return default((bool, bool));
	}

	[Token(Token = "0x600236F")]
	[Address(RVA = "0x3137CF0", Offset = "0x31362F0", VA = "0x183137CF0")]
	internal (UnityEngine.TextCore.RichTextTagParser.TagType, string) ATGFindIntersectingLink(Vector2 point)
	{
		return default((UnityEngine.TextCore.RichTextTagParser.TagType, string));
	}

	[Token(Token = "0x6002370")]
	[Address(RVA = "0x313AA20", Offset = "0x3139020", VA = "0x18313AA20")]
	internal void UpdateATGTextEventHandler()
	{
	}

	[Token(Token = "0x6002371")]
	[Address(RVA = "0x3139B00", Offset = "0x3138100", VA = "0x183139B00")]
	internal void EnsureIsReadyForJobs()
	{
	}

	[Token(Token = "0x6002372")]
	[Address(RVA = "0x3138830", Offset = "0x3136E30", VA = "0x183138830")]
	internal bool ConvertUssToNativeTextGenerationSettings([Optional] string? textToMeasure, [Optional] float? fontsize)
	{
		return default(bool);
	}

	[Token(Token = "0x6002373")]
	[Address(RVA = "0x3139C60", Offset = "0x3138260", VA = "0x183139C60")]
	private TextAsset GetICUAsset()
	{
		return null;
	}

	[Token(Token = "0x6002374")]
	[Address(RVA = "0x3139BB0", Offset = "0x31381B0", VA = "0x183139BB0")]
	internal static TextAsset GetICUAssetStaticFalback()
	{
		return null;
	}

	[Token(Token = "0x6002376")]
	[Address(RVA = "0x313A410", Offset = "0x3138A10", VA = "0x18313A410")]
	protected internal void InitTextLib()
	{
	}

	[Token(Token = "0x6002377")]
	[Address(RVA = "0x313A7D0", Offset = "0x3138DD0", VA = "0x18313A7D0", Slot = "6")]
	public override void RemoveFromPermanentCacheATG()
	{
	}

	[Token(Token = "0x6002378")]
	[Address(RVA = "0x313AF80", Offset = "0x3139580", VA = "0x18313AF80")]
	public UITKTextHandle(TextElement te)
	{
	}

	[Token(Token = "0x6002379")]
	[Address(RVA = "0x3139F40", Offset = "0x3138540", VA = "0x183139F40", Slot = "4")]
	protected override float GetPixelsPerPoint()
	{
		return default(float);
	}

	[Token(Token = "0x600237C")]
	[Address(RVA = "0x313A810", Offset = "0x3138E10", VA = "0x18313A810", Slot = "7")]
	public override void SetDirty()
	{
	}

	[Token(Token = "0x6002385")]
	[Address(RVA = "0x3138400", Offset = "0x3136A00", VA = "0x183138400")]
	public Vector2 ComputeTextSize(string textToMeasure, float width, VisualElement.MeasureMode widthMode, float height, VisualElement.MeasureMode heightMode, [Optional] float? fontsize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6002386")]
	[Address(RVA = "0x3138680", Offset = "0x3136C80", VA = "0x183138680")]
	public Vector2 ComputeTextSize(in UnityEngine.TextCore.Text.RenderedText textToMeasure, float width, float height, [Optional] float? fontsize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6002387")]
	[Address(RVA = "0x31382C0", Offset = "0x31368C0", VA = "0x1831382C0")]
	public void ComputeSettingsAndUpdate()
	{
	}

	[Token(Token = "0x6002388")]
	[Address(RVA = "0x313A300", Offset = "0x3138900", VA = "0x18313A300")]
	public void HandleATag()
	{
	}

	[Token(Token = "0x6002389")]
	[Address(RVA = "0x313A340", Offset = "0x3138940", VA = "0x18313A340")]
	public void HandleLinkTag()
	{
	}

	[Token(Token = "0x600238A")]
	[Address(RVA = "0x313A320", Offset = "0x3138920", VA = "0x18313A320")]
	public void HandleLinkAndATagCallbacks()
	{
	}

	[Token(Token = "0x600238B")]
	[Address(RVA = "0x313AAA0", Offset = "0x31390A0", VA = "0x18313AAA0")]
	public void UpdateMesh()
	{
	}

	[Token(Token = "0x600238C")]
	[Address(RVA = "0x3137EB0", Offset = "0x31364B0", VA = "0x183137EB0", Slot = "5")]
	public override void AddToPermanentCacheAndGenerateMesh()
	{
	}

	[Token(Token = "0x600238D")]
	[Address(RVA = "0x3139F70", Offset = "0x3138570", VA = "0x183139F70")]
	private UnityEngine.TextCore.Text.TextOverflowMode GetTextOverflowMode()
	{
		return default(UnityEngine.TextCore.Text.TextOverflowMode);
	}

	[Token(Token = "0x600238E")]
	[Address(RVA = "0x31392B0", Offset = "0x31378B0", VA = "0x1831392B0", Slot = "11")]
	internal virtual bool ConvertUssToTextGenerationSettings(bool populateScreenRect, [Optional] float? fontsize)
	{
		return default(bool);
	}

	[Token(Token = "0x600238F")]
	[Address(RVA = "0x313A9E0", Offset = "0x3138FE0", VA = "0x18313A9E0")]
	internal bool TextLibraryCanElide()
	{
		return default(bool);
	}

	[Token(Token = "0x6002390")]
	[Address(RVA = "0x313A060", Offset = "0x3138660", VA = "0x18313A060")]
	internal float GetVertexPadding(FontAsset fontAsset)
	{
		return default(float);
	}

	[Token(Token = "0x6002391")]
	[Address(RVA = "0x313A500", Offset = "0x3138B00", VA = "0x18313A500", Slot = "10")]
	internal override bool IsAdvancedTextEnabledForElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6002392")]
	[Address(RVA = "0x313A680", Offset = "0x3138C80", VA = "0x18313A680")]
	internal void ReleaseResourcesIfPossible()
	{
	}

	[Token(Token = "0x6002394")]
	[Address(RVA = "0x313A510", Offset = "0x3138B10", VA = "0x18313A510")]
	public bool IsElided()
	{
		return default(bool);
	}
}
