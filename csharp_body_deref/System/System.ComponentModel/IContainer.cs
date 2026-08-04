// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.IContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000256")]
public interface IContainer : IDisposable
{
	[Token(Token = "0x17000341")]
	ComponentCollection Components
	{
		[Token(Token = "0x6000EA2")]
		get;
	}

	[Token(Token = "0x6000EA0")]
	void Add(IComponent component);

	[Token(Token = "0x6000EA1")]
	void Add(IComponent component, string name);

	[Token(Token = "0x6000EA3")]
	void Remove(IComponent component);
}
