// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DynamicString
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x64BE420", Offset = "0x64BD420", VA = "0x64BE420")]
	public DynamicString()
	{
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x64BE460", Offset = "0x64BD460", VA = "0x64BE460")]
	public DynamicString(string s)
	{
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x64BE510", Offset = "0x64BD510", VA = "0x64BE510")]
	public DynamicString(int capacity)
	{
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x64BE550", Offset = "0x64BD550", VA = "0x64BE550")]
	public void Append(string s)
	{
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x64BE660", Offset = "0x64BD660", VA = "0x64BE660")]
	public void Append(DynamicString s)
	{
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x64BE6B0", Offset = "0x64BD6B0", VA = "0x64BE6B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
