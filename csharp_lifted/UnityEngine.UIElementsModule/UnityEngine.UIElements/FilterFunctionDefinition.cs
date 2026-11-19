// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FilterFunctionDefinition
// Update status: unchanged since the previous dump
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
	[DontCreateProperty]
	[SerializeField]
	private string m_FilterName;

	[Token(Token = "0x400086D")]
	[FieldOffset(Offset = "0x20")]
	[DontCreateProperty]
	[SerializeField]
	private FilterParameterDeclaration[] m_Parameters;

	[Token(Token = "0x400086E")]
	[FieldOffset(Offset = "0x28")]
	[DontCreateProperty]
	[SerializeField]
	private PostProcessingPass[] m_Passes;

	[Token(Token = "0x170002EF")]
	[CreateProperty]
	public string filterName
	{
		[Token(Token = "0x6000F48")]
		[Address(RVA = "0x6C72BE0", Offset = "0x6C71BE0", VA = "0x6C72BE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F49")]
		[Address(RVA = "0x6C72BF0", Offset = "0x6C71BF0", VA = "0x6C72BF0")]
		set
		{
		}
	}

	[Token(Token = "0x170002F0")]
	[CreateProperty]
	public FilterParameterDeclaration[] parameters
	{
		[Token(Token = "0x6000F4A")]
		[Address(RVA = "0x6C72C00", Offset = "0x6C71C00", VA = "0x6C72C00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F4B")]
		[Address(RVA = "0x6C72C10", Offset = "0x6C71C10", VA = "0x6C72C10")]
		set
		{
		}
	}

	[Token(Token = "0x170002F1")]
	[CreateProperty]
	public PostProcessingPass[] passes
	{
		[Token(Token = "0x6000F4C")]
		[Address(RVA = "0x6C72C20", Offset = "0x6C71C20", VA = "0x6C72C20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F4D")]
		[Address(RVA = "0x6C72C30", Offset = "0x6C71C30", VA = "0x6C72C30")]
		set
		{
		}
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x6C72C40", Offset = "0x6C71C40", VA = "0x6C72C40")]
	public FilterFunctionDefinition()
	{
	}
}
