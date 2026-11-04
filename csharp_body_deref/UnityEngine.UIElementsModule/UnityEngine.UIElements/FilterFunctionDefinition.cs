// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FilterFunctionDefinition
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200024D")]
[HelpURL("ui-systems/custom-filters")]
public sealed class FilterFunctionDefinition : ScriptableObject
{
	[Token(Token = "0x400086C")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[DontCreateProperty]
	private string m_FilterName;

	[Token(Token = "0x400086D")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[DontCreateProperty]
	private FilterParameterDeclaration[] m_Parameters;

	[Token(Token = "0x400086E")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[DontCreateProperty]
	private PostProcessingPass[] m_Passes;

	[Token(Token = "0x170002EF")]
	[CreateProperty]
	public string filterName
	{
		[Token(Token = "0x6000F48")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F49")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x170002F0")]
	[CreateProperty]
	public FilterParameterDeclaration[] parameters
	{
		[Token(Token = "0x6000F4A")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F4B")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170002F1")]
	[CreateProperty]
	public PostProcessingPass[] passes
	{
		[Token(Token = "0x6000F4C")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F4D")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	public FilterFunctionDefinition()
	{
	}
}
