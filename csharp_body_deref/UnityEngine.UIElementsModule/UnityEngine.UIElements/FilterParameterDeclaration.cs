// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FilterParameterDeclaration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200024C")]
public struct FilterParameterDeclaration
{
	[Token(Token = "0x4000869")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[DontCreateProperty]
	private string m_Name;

	[Token(Token = "0x400086A")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	[DontCreateProperty]
	private FilterParameter m_InterpolationDefaultValue;

	[Token(Token = "0x400086B")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal FilterParameter defaultValue;

	[Token(Token = "0x170002ED")]
	[CreateProperty]
	public string name
	{
		[Token(Token = "0x6000F44")]
		[Address(RVA = "0x6C72B80", Offset = "0x6C71B80", VA = "0x6C72B80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F45")]
		[Address(RVA = "0x6C72B90", Offset = "0x6C71B90", VA = "0x6C72B90")]
		set
		{
		}
	}

	[Token(Token = "0x170002EE")]
	[CreateProperty]
	public FilterParameter interpolationDefaultValue
	{
		[Token(Token = "0x6000F46")]
		[Address(RVA = "0x6C72BA0", Offset = "0x6C71BA0", VA = "0x6C72BA0")]
		get
		{
			return default(FilterParameter);
		}
		[Token(Token = "0x6000F47")]
		[Address(RVA = "0x6C72BC0", Offset = "0x6C71BC0", VA = "0x6C72BC0")]
		set
		{
		}
	}
}
