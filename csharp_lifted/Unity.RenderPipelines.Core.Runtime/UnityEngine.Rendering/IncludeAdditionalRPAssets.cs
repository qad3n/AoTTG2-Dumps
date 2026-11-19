// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IncludeAdditionalRPAssets
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6525580", Offset = "0x6524580", VA = "0x6525580", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000163")]
	public bool includeReferencedInScenes
	{
		[Token(Token = "0x6000B95")]
		[Address(RVA = "0x6525590", Offset = "0x6524590", VA = "0x6525590")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B96")]
		[Address(RVA = "0x65255A0", Offset = "0x65245A0", VA = "0x65255A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	public bool includeAssetsByLabel
	{
		[Token(Token = "0x6000B97")]
		[Address(RVA = "0x6525600", Offset = "0x6524600", VA = "0x6525600")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B98")]
		[Address(RVA = "0x6525610", Offset = "0x6524610", VA = "0x6525610")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public string labelToInclude
	{
		[Token(Token = "0x6000B99")]
		[Address(RVA = "0x6525670", Offset = "0x6524670", VA = "0x6525670")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x6525680", Offset = "0x6524680", VA = "0x6525680")]
		set
		{
		}
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x65256E0", Offset = "0x65246E0", VA = "0x65256E0")]
	public IncludeAdditionalRPAssets()
	{
	}
}
