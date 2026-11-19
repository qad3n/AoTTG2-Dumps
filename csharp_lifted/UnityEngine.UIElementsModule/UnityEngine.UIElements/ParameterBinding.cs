// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ParameterBinding
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
[Token(Token = "0x200024E")]
public struct ParameterBinding
{
	[Token(Token = "0x400086F")]
	[FieldOffset(Offset = "0x0")]
	[DontCreateProperty]
	[SerializeField]
	private int m_Index;

	[Token(Token = "0x4000870")]
	[FieldOffset(Offset = "0x8")]
	[DontCreateProperty]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x170002F2")]
	[CreateProperty]
	public int index
	{
		[Token(Token = "0x6000F4F")]
		[Address(RVA = "0x6C72C50", Offset = "0x6C71C50", VA = "0x6C72C50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F50")]
		[Address(RVA = "0x6C72C60", Offset = "0x6C71C60", VA = "0x6C72C60")]
		set
		{
		}
	}

	[Token(Token = "0x170002F3")]
	[CreateProperty]
	public string name
	{
		[Token(Token = "0x6000F51")]
		[Address(RVA = "0x6C72C70", Offset = "0x6C71C70", VA = "0x6C72C70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x6C72C80", Offset = "0x6C71C80", VA = "0x6C72C80")]
		set
		{
		}
	}
}
