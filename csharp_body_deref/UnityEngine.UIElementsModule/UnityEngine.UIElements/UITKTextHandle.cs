// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UITKTextHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003EC")]
internal class UITKTextHandle : UnityEngine.TextCore.Text.TextHandle
{
	[Token(Token = "0x4000BDD")]
	[FieldOffset(Offset = "0x50")]
	private TextElement m_TextElement;

	[Token(Token = "0x4000BDE")]
	[FieldOffset(Offset = "0x58")]
	internal bool isOverridingCursor;

	[Token(Token = "0x4000BDF")]
	[FieldOffset(Offset = "0x5C")]
	internal int currentLinkIDHash;

	[Token(Token = "0x4000BE0")]
	[FieldOffset(Offset = "0x60")]
	internal bool hasLinkTag;

	[Token(Token = "0x4000BE1")]
	[FieldOffset(Offset = "0x61")]
	internal bool hasATag;

	[Token(Token = "0x4000BE2")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly float k_MinPadding;

	[Token(Token = "0x1700069A")]
	public Vector2 MeasuredSizes
	{
		[Token(Token = "0x60018CC")]
		[Address(RVA = "0x4F52690", Offset = "0x4F52690", VA = "0x4F52690")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60018CD")]
		[Address(RVA = "0x4F526A0", Offset = "0x4F526A0", VA = "0x4F526A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700069B")]
	public Vector2 RoundedSizes
	{
		[Token(Token = "0x60018CE")]
		[Address(RVA = "0x4F526B0", Offset = "0x4F526B0", VA = "0x4F526B0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60018CF")]
		[Address(RVA = "0x4F526C0", Offset = "0x4F526C0", VA = "0x4F526C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60018CB")]
	[Address(RVA = "0x4F52610", Offset = "0x4F52610", VA = "0x4F52610")]
	public UITKTextHandle(TextElement te)
	{
	}

	[Token(Token = "0x60018D0")]
	[Address(RVA = "0x4F526D0", Offset = "0x4F526D0", VA = "0x4F526D0")]
	public Vector2 ComputeTextSize(string textToMeasure, float width, float height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60018D1")]
	[Address(RVA = "0x4F52C10", Offset = "0x4F52C10", VA = "0x4F52C10", Slot = "6")]
	public virtual UnityEngine.TextCore.Text.MeshInfo[] Update()
	{
		return null;
	}

	[Token(Token = "0x60018D2")]
	[Address(RVA = "0x4F537A0", Offset = "0x4F537A0", VA = "0x4F537A0", Slot = "4")]
	public override void AddTextInfoToCache()
	{
	}

	[Token(Token = "0x60018D3")]
	[Address(RVA = "0x4F537C0", Offset = "0x4F537C0", VA = "0x4F537C0")]
	private void ATagOnPointerUp(PointerUpEvent pue)
	{
	}

	[Token(Token = "0x60018D4")]
	[Address(RVA = "0x4F53980", Offset = "0x4F53980", VA = "0x4F53980")]
	private void ATagOnPointerOver(PointerOverEvent _)
	{
	}

	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x4F53990", Offset = "0x4F53990", VA = "0x4F53990")]
	private void ATagOnPointerMove(PointerMoveEvent pme)
	{
	}

	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x4F53CB0", Offset = "0x4F53CB0", VA = "0x4F53CB0")]
	private void ATagOnPointerOut(PointerOutEvent _)
	{
	}

	[Token(Token = "0x60018D7")]
	[Address(RVA = "0x4F53CC0", Offset = "0x4F53CC0", VA = "0x4F53CC0")]
	internal void LinkTagOnPointerDown(PointerDownEvent pde)
	{
	}

	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x4F54000", Offset = "0x4F54000", VA = "0x4F54000")]
	internal void LinkTagOnPointerUp(PointerUpEvent pue)
	{
	}

	[Token(Token = "0x60018D9")]
	[Address(RVA = "0x4F54340", Offset = "0x4F54340", VA = "0x4F54340")]
	internal void LinkTagOnPointerMove(PointerMoveEvent pme)
	{
	}

	[Token(Token = "0x60018DA")]
	[Address(RVA = "0x4F549C0", Offset = "0x4F549C0", VA = "0x4F549C0")]
	private void LinkTagOnPointerOut(PointerOutEvent poe)
	{
	}

	[Token(Token = "0x60018DB")]
	[Address(RVA = "0x4F53360", Offset = "0x4F53360", VA = "0x4F53360")]
	private void HandleLinkTag()
	{
	}

	[Token(Token = "0x60018DC")]
	[Address(RVA = "0x4F52DF0", Offset = "0x4F52DF0", VA = "0x4F52DF0")]
	private void HandleATag()
	{
	}

	[Token(Token = "0x60018DD")]
	[Address(RVA = "0x4F54BF0", Offset = "0x4F54BF0", VA = "0x4F54BF0")]
	private UnityEngine.TextCore.Text.TextOverflowMode GetTextOverflowMode()
	{
		return default(UnityEngine.TextCore.Text.TextOverflowMode);
	}

	[Token(Token = "0x60018DE")]
	[Address(RVA = "0x4F527B0", Offset = "0x4F527B0", VA = "0x4F527B0")]
	internal void ConvertUssToTextGenerationSettings()
	{
	}

	[Token(Token = "0x60018DF")]
	[Address(RVA = "0x4F54CC0", Offset = "0x4F54CC0", VA = "0x4F54CC0")]
	internal bool TextLibraryCanElide()
	{
		return default(bool);
	}

	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x4F54F90", Offset = "0x4F54F90", VA = "0x4F54F90")]
	internal float GetTextEffectPadding(FontAsset fontAsset)
	{
		return default(float);
	}
}
