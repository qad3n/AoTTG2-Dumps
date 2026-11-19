// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.LooseAssemblyName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000ED")]
public struct LooseAssemblyName
{
	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x0")]
	public readonly string name;

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x67B0720", Offset = "0x67AF720", VA = "0x67B0720")]
	public LooseAssemblyName(string name)
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x67B0780", Offset = "0x67AF780", VA = "0x67B0780", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x67B07E0", Offset = "0x67AF7E0", VA = "0x67B07E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x67B0820", Offset = "0x67AF820", VA = "0x67B0820")]
	public static bool operator ==(LooseAssemblyName a, LooseAssemblyName b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x67B08C0", Offset = "0x67AF8C0", VA = "0x67B08C0")]
	public static bool operator !=(LooseAssemblyName a, LooseAssemblyName b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x67B0960", Offset = "0x67AF960", VA = "0x67B0960")]
	public static implicit operator LooseAssemblyName(string name)
	{
		return default(LooseAssemblyName);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x67B09D0", Offset = "0x67AF9D0", VA = "0x67B09D0")]
	public static implicit operator string(LooseAssemblyName name)
	{
		return null;
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x67B09E0", Offset = "0x67AF9E0", VA = "0x67B09E0")]
	public static explicit operator LooseAssemblyName(AssemblyName strongAssemblyName)
	{
		return default(LooseAssemblyName);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x67B0A60", Offset = "0x67AFA60", VA = "0x67B0A60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
