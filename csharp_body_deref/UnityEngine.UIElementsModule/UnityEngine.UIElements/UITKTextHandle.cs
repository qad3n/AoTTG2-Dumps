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
		[Address(RVA = "0x4C2AD60", Offset = "0x4C2AD60", VA = "0x4C2AD60")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60018CD")]
		[Address(RVA = "0x4C2AD70", Offset = "0x4C2AD70", VA = "0x4C2AD70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700069B")]
	public Vector2 RoundedSizes
	{
		[Token(Token = "0x60018CE")]
		[Address(RVA = "0x4C2AD80", Offset = "0x4C2AD80", VA = "0x4C2AD80")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60018CF")]
		[Address(RVA = "0x4C2AD90", Offset = "0x4C2AD90", VA = "0x4C2AD90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60018CB")]
	[Address(RVA = "0x4C2ACE0", Offset = "0x4C2ACE0", VA = "0x4C2ACE0")]
	public UITKTextHandle(TextElement te)
	{
	}

	[Token(Token = "0x60018D0")]
	[Address(RVA = "0x4C2ADA0", Offset = "0x4C2ADA0", VA = "0x4C2ADA0")]
	public Vector2 ComputeTextSize(string textToMeasure, float width, float height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60018D1")]
	[Address(RVA = "0x4C2B2E0", Offset = "0x4C2B2E0", VA = "0x4C2B2E0", Slot = "6")]
	public virtual UnityEngine.TextCore.Text.MeshInfo[] Update()
	{
		return null;
	}

	[Token(Token = "0x60018D2")]
	[Address(RVA = "0x4C2BE70", Offset = "0x4C2BE70", VA = "0x4C2BE70", Slot = "4")]
	public override void AddTextInfoToCache()
	{
	}

	[Token(Token = "0x60018D3")]
	[Address(RVA = "0x4C2BE90", Offset = "0x4C2BE90", VA = "0x4C2BE90")]
	private void ATagOnPointerUp(PointerUpEvent pue)
	{
	}

	[Token(Token = "0x60018D4")]
	[Address(RVA = "0x4C2C050", Offset = "0x4C2C050", VA = "0x4C2C050")]
	private void ATagOnPointerOver(PointerOverEvent _)
	{
	}

	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x4C2C060", Offset = "0x4C2C060", VA = "0x4C2C060")]
	private void ATagOnPointerMove(PointerMoveEvent pme)
	{
	}

	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x4C2C380", Offset = "0x4C2C380", VA = "0x4C2C380")]
	private void ATagOnPointerOut(PointerOutEvent _)
	{
	}

	[Token(Token = "0x60018D7")]
	[Address(RVA = "0x4C2C390", Offset = "0x4C2C390", VA = "0x4C2C390")]
	internal void LinkTagOnPointerDown(PointerDownEvent pde)
	{
	}

	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x4C2C6D0", Offset = "0x4C2C6D0", VA = "0x4C2C6D0")]
	internal void LinkTagOnPointerUp(PointerUpEvent pue)
	{
	}

	[Token(Token = "0x60018D9")]
	[Address(RVA = "0x4C2CA10", Offset = "0x4C2CA10", VA = "0x4C2CA10")]
	internal void LinkTagOnPointerMove(PointerMoveEvent pme)
	{
	}

	[Token(Token = "0x60018DA")]
	[Address(RVA = "0x4C2D090", Offset = "0x4C2D090", VA = "0x4C2D090")]
	private void LinkTagOnPointerOut(PointerOutEvent poe)
	{
	}

	[Token(Token = "0x60018DB")]
	[Address(RVA = "0x4C2BA30", Offset = "0x4C2BA30", VA = "0x4C2BA30")]
	private void HandleLinkTag()
	{
	}

	[Token(Token = "0x60018DC")]
	[Address(RVA = "0x4C2B4C0", Offset = "0x4C2B4C0", VA = "0x4C2B4C0")]
	private void HandleATag()
	{
	}

	[Token(Token = "0x60018DD")]
	[Address(RVA = "0x4C2D2C0", Offset = "0x4C2D2C0", VA = "0x4C2D2C0")]
	private UnityEngine.TextCore.Text.TextOverflowMode GetTextOverflowMode()
	{
		return default(UnityEngine.TextCore.Text.TextOverflowMode);
	}

	[Token(Token = "0x60018DE")]
	[Address(RVA = "0x4C2AE80", Offset = "0x4C2AE80", VA = "0x4C2AE80")]
	internal void ConvertUssToTextGenerationSettings()
	{
	}

	[Token(Token = "0x60018DF")]
	[Address(RVA = "0x4C2D390", Offset = "0x4C2D390", VA = "0x4C2D390")]
	internal bool TextLibraryCanElide()
	{
		return default(bool);
	}

	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x4C2D660", Offset = "0x4C2D660", VA = "0x4C2D660")]
	internal float GetTextEffectPadding(FontAsset fontAsset)
	{
		return default(float);
	}
}
