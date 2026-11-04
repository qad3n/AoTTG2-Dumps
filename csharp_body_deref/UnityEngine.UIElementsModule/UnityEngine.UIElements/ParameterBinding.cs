// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ParameterBinding
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
[Token(Token = "0x200024E")]
public struct ParameterBinding
{
	[Token(Token = "0x400086F")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[DontCreateProperty]
	private int m_Index;

	[Token(Token = "0x4000870")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	[DontCreateProperty]
	private string m_Name;

	[Token(Token = "0x170002F2")]
	[CreateProperty]
	public int index
	{
		[Token(Token = "0x6000F4F")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F50")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x170002F3")]
	[CreateProperty]
	public string name
	{
		[Token(Token = "0x6000F51")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x1D69900", Offset = "0x1D67F00", VA = "0x181D69900")]
		set
		{
		}
	}
}
