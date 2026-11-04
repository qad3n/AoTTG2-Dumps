// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DynamicString
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000048")]
[DebuggerDisplay("Size = {size} Capacity = {capacity}")]
public class DynamicString : DynamicArray<char>
{
	[Token(Token = "0x6000508")]
	[Address(RVA = "0x2AC10B0", Offset = "0x2ABF6B0", VA = "0x182AC10B0")]
	public DynamicString()
	{
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x2AC1000", Offset = "0x2ABF600", VA = "0x182AC1000")]
	public DynamicString(string s)
	{
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x2AC10F0", Offset = "0x2ABF6F0", VA = "0x182AC10F0")]
	public DynamicString(int capacity)
	{
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x2AC0EB0", Offset = "0x2ABF4B0", VA = "0x182AC0EB0")]
	public void Append(string s)
	{
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x2AC0E60", Offset = "0x2ABF460", VA = "0x182AC0E60")]
	public void Append(DynamicString s)
	{
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x2AC0FB0", Offset = "0x2ABF5B0", VA = "0x182AC0FB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
