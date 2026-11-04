// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IncludeAdditionalRPAssets
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200017C")]
[SupportedOnRenderPipeline(new Type[] { })]
[CategoryInfo(Name = "H: RP Assets Inclusion", Order = 990)]
[HideInInspector]
public class IncludeAdditionalRPAssets : IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x200017D")]
	private enum Version
	{
		[Token(Token = "0x4000785")]
		Initial = 0,
		[Token(Token = "0x4000786")]
		Count = 1,
		[Token(Token = "0x4000787")]
		Last = Initial
	}

	[Token(Token = "0x4000780")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private Version m_version;

	[Token(Token = "0x4000781")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private bool m_IncludeReferencedInScenes;

	[Token(Token = "0x4000782")]
	[FieldOffset(Offset = "0x15")]
	[SerializeField]
	private bool m_IncludeAssetsByLabel;

	[Token(Token = "0x4000783")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private string m_LabelToInclude;

	[Token(Token = "0x17000162")]
	private int UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002Eversion
	{
		[Token(Token = "0x6000B94")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000163")]
	public bool includeReferencedInScenes
	{
		[Token(Token = "0x6000B95")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B96")]
		[Address(RVA = "0x2B41440", Offset = "0x2B3FA40", VA = "0x182B41440")]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	public bool includeAssetsByLabel
	{
		[Token(Token = "0x6000B97")]
		[Address(RVA = "0x1A78700", Offset = "0x1A76D00", VA = "0x181A78700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B98")]
		[Address(RVA = "0x2B413D0", Offset = "0x2B3F9D0", VA = "0x182B413D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public string labelToInclude
	{
		[Token(Token = "0x6000B99")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x2B414B0", Offset = "0x2B3FAB0", VA = "0x182B414B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public IncludeAdditionalRPAssets()
	{
	}
}
