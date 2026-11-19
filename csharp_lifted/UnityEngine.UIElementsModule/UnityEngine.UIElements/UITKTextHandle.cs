// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UITKTextHandle
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B2B900", Offset = "0x6B2A900", VA = "0x6B2B900")]
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
		[Address(RVA = "0x6B2DC70", Offset = "0x6B2CC70", VA = "0x6B2DC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000943")]
	internal float LastPixelPerPoint
	{
		[Token(Token = "0x600237A")]
		[Address(RVA = "0x6B2DDE0", Offset = "0x6B2CDE0", VA = "0x6B2DDE0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600237B")]
		[Address(RVA = "0x6B2DDF0", Offset = "0x6B2CDF0", VA = "0x6B2DDF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000944")]
	internal float? MeasuredWidth
	{
		[Token(Token = "0x600237D")]
		[Address(RVA = "0x6B2DE20", Offset = "0x6B2CE20", VA = "0x6B2DE20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600237E")]
		[Address(RVA = "0x6B2DE30", Offset = "0x6B2CE30", VA = "0x6B2DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000945")]
	internal float RoundedWidth
	{
		[Token(Token = "0x600237F")]
		[Address(RVA = "0x6B2DE40", Offset = "0x6B2CE40", VA = "0x6B2DE40")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002380")]
		[Address(RVA = "0x6B2DE50", Offset = "0x6B2CE50", VA = "0x6B2DE50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000946")]
	internal float? ATGMeasuredWidth
	{
		[Token(Token = "0x6002381")]
		[Address(RVA = "0x6B2DE60", Offset = "0x6B2CE60", VA = "0x6B2DE60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002382")]
		[Address(RVA = "0x6B2DE70", Offset = "0x6B2CE70", VA = "0x6B2DE70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000947")]
	internal float ATGRoundedWidth
	{
		[Token(Token = "0x6002383")]
		[Address(RVA = "0x6B2DE80", Offset = "0x6B2CE80", VA = "0x6B2DE80")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002384")]
		[Address(RVA = "0x6B2DE90", Offset = "0x6B2CE90", VA = "0x6B2DE90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000948")]
	public override bool IsPlaceholder
	{
		[Token(Token = "0x6002393")]
		[Address(RVA = "0x6B2F500", Offset = "0x6B2E500", VA = "0x6B2F500", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002368")]
	[Address(RVA = "0x6B2B980", Offset = "0x6B2A980", VA = "0x6B2B980")]
	private void ComputeNativeTextSize(in string textToMeasure, float width, VisualElement.MeasureMode widthMode, float height, VisualElement.MeasureMode heightMode, [Optional] float? fontsize)
	{
	}

	[Token(Token = "0x6002369")]
	[Address(RVA = "0x6B2C8F0", Offset = "0x6B2B8F0", VA = "0x6B2C8F0")]
	public (UnityEngine.TextCore.Text.NativeTextInfo, bool) UpdateNative(bool generateNativeSettings = true)
	{
		return default((UnityEngine.TextCore.Text.NativeTextInfo, bool));
	}

	[Token(Token = "0x600236A")]
	[Address(RVA = "0x6B2CD00", Offset = "0x6B2BD00", VA = "0x6B2CD00")]
	public void CacheTextGenerationInfo()
	{
	}

	[Token(Token = "0x600236B")]
	[Address(RVA = "0x6B2CDE0", Offset = "0x6B2BDE0", VA = "0x6B2CDE0")]
	public void ShapeText()
	{
	}

	[Token(Token = "0x600236C")]
	[Address(RVA = "0x6B2CF70", Offset = "0x6B2BF70", VA = "0x6B2CF70")]
	public void ProcessMeshInfos(UnityEngine.TextCore.Text.NativeTextInfo textInfo, ref List<List<List<int>>> textElementIndicesByMesh, ref List<bool> hasMultipleColorsByMesh)
	{
	}

	[Token(Token = "0x600236D")]
	[Address(RVA = "0x6B2D070", Offset = "0x6B2C070", VA = "0x6B2D070")]
	public bool HasMissingGlyphs(UnityEngine.TextCore.Text.NativeTextInfo textInfo, ref Dictionary<int, HashSet<uint>> missingGlyphsPerFontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x600236E")]
	[Address(RVA = "0x6B2D0E0", Offset = "0x6B2C0E0", VA = "0x6B2D0E0")]
	private (bool, bool) hasLinkAndHyperlink()
	{
		return default((bool, bool));
	}

	[Token(Token = "0x600236F")]
	[Address(RVA = "0x6B29F40", Offset = "0x6B28F40", VA = "0x6B29F40")]
	internal (UnityEngine.TextCore.RichTextTagParser.TagType, string) ATGFindIntersectingLink(Vector2 point)
	{
		return default((UnityEngine.TextCore.RichTextTagParser.TagType, string));
	}

	[Token(Token = "0x6002370")]
	[Address(RVA = "0x6B2D2F0", Offset = "0x6B2C2F0", VA = "0x6B2D2F0")]
	internal void UpdateATGTextEventHandler()
	{
	}

	[Token(Token = "0x6002371")]
	[Address(RVA = "0x6B2D380", Offset = "0x6B2C380", VA = "0x6B2D380")]
	internal void EnsureIsReadyForJobs()
	{
	}

	[Token(Token = "0x6002372")]
	[Address(RVA = "0x6B2BC30", Offset = "0x6B2AC30", VA = "0x6B2BC30")]
	internal bool ConvertUssToNativeTextGenerationSettings([Optional] string? textToMeasure, [Optional] float? fontsize)
	{
		return default(bool);
	}

	[Token(Token = "0x6002373")]
	[Address(RVA = "0x6B2D9A0", Offset = "0x6B2C9A0", VA = "0x6B2D9A0")]
	private TextAsset GetICUAsset()
	{
		return null;
	}

	[Token(Token = "0x6002374")]
	[Address(RVA = "0x6B2DBC0", Offset = "0x6B2CBC0", VA = "0x6B2DBC0")]
	internal static TextAsset GetICUAssetStaticFalback()
	{
		return null;
	}

	[Token(Token = "0x6002376")]
	[Address(RVA = "0x6B2D430", Offset = "0x6B2C430", VA = "0x6B2D430")]
	protected internal void InitTextLib()
	{
	}

	[Token(Token = "0x6002377")]
	[Address(RVA = "0x6B2DCD0", Offset = "0x6B2CCD0", VA = "0x6B2DCD0", Slot = "6")]
	public override void RemoveFromPermanentCacheATG()
	{
	}

	[Token(Token = "0x6002378")]
	[Address(RVA = "0x6B2DD00", Offset = "0x6B2CD00", VA = "0x6B2DD00")]
	public UITKTextHandle(TextElement te)
	{
	}

	[Token(Token = "0x6002379")]
	[Address(RVA = "0x6B2DDC0", Offset = "0x6B2CDC0", VA = "0x6B2DDC0", Slot = "4")]
	protected override float GetPixelsPerPoint()
	{
		return default(float);
	}

	[Token(Token = "0x600237C")]
	[Address(RVA = "0x6B2DE00", Offset = "0x6B2CE00", VA = "0x6B2DE00", Slot = "7")]
	public override void SetDirty()
	{
	}

	[Token(Token = "0x6002385")]
	[Address(RVA = "0x6B2DEA0", Offset = "0x6B2CEA0", VA = "0x6B2DEA0")]
	public Vector2 ComputeTextSize(string textToMeasure, float width, VisualElement.MeasureMode widthMode, float height, VisualElement.MeasureMode heightMode, [Optional] float? fontsize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6002386")]
	[Address(RVA = "0x6B2DFB0", Offset = "0x6B2CFB0", VA = "0x6B2DFB0")]
	public Vector2 ComputeTextSize(in UnityEngine.TextCore.Text.RenderedText textToMeasure, float width, float height, [Optional] float? fontsize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6002387")]
	[Address(RVA = "0x6B2E130", Offset = "0x6B2D130", VA = "0x6B2E130")]
	public void ComputeSettingsAndUpdate()
	{
	}

	[Token(Token = "0x6002388")]
	[Address(RVA = "0x6B2E270", Offset = "0x6B2D270", VA = "0x6B2E270")]
	public void HandleATag()
	{
	}

	[Token(Token = "0x6002389")]
	[Address(RVA = "0x6B2E290", Offset = "0x6B2D290", VA = "0x6B2E290")]
	public void HandleLinkTag()
	{
	}

	[Token(Token = "0x600238A")]
	[Address(RVA = "0x6B2E2B0", Offset = "0x6B2D2B0", VA = "0x6B2E2B0")]
	public void HandleLinkAndATagCallbacks()
	{
	}

	[Token(Token = "0x600238B")]
	[Address(RVA = "0x6B2E1B0", Offset = "0x6B2D1B0", VA = "0x6B2E1B0")]
	public void UpdateMesh()
	{
	}

	[Token(Token = "0x600238C")]
	[Address(RVA = "0x6B2E2D0", Offset = "0x6B2D2D0", VA = "0x6B2E2D0", Slot = "5")]
	public override void AddToPermanentCacheAndGenerateMesh()
	{
	}

	[Token(Token = "0x600238D")]
	[Address(RVA = "0x6B2E490", Offset = "0x6B2D490", VA = "0x6B2E490")]
	private UnityEngine.TextCore.Text.TextOverflowMode GetTextOverflowMode()
	{
		return default(UnityEngine.TextCore.Text.TextOverflowMode);
	}

	[Token(Token = "0x600238E")]
	[Address(RVA = "0x6B2E550", Offset = "0x6B2D550", VA = "0x6B2E550", Slot = "11")]
	internal virtual bool ConvertUssToTextGenerationSettings(bool populateScreenRect, [Optional] float? fontsize)
	{
		return default(bool);
	}

	[Token(Token = "0x600238F")]
	[Address(RVA = "0x6B2D530", Offset = "0x6B2C530", VA = "0x6B2D530")]
	internal bool TextLibraryCanElide()
	{
		return default(bool);
	}

	[Token(Token = "0x6002390")]
	[Address(RVA = "0x6B2D780", Offset = "0x6B2C780", VA = "0x6B2D780")]
	internal float GetVertexPadding(FontAsset fontAsset)
	{
		return default(float);
	}

	[Token(Token = "0x6002391")]
	[Address(RVA = "0x6B2F4F0", Offset = "0x6B2E4F0", VA = "0x6B2F4F0", Slot = "10")]
	internal override bool IsAdvancedTextEnabledForElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6002392")]
	[Address(RVA = "0x6B2E350", Offset = "0x6B2D350", VA = "0x6B2E350")]
	internal void ReleaseResourcesIfPossible()
	{
	}

	[Token(Token = "0x6002394")]
	[Address(RVA = "0x6B2F560", Offset = "0x6B2E560", VA = "0x6B2F560")]
	public bool IsElided()
	{
		return default(bool);
	}
}
