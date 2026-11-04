// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000016")]
public interface IProperty
{
	[Token(Token = "0x17000008")]
	string Name
	{
		[Token(Token = "0x600002F")]
		get;
	}

	[Token(Token = "0x6000030")]
	Type DeclaredValueType();
}
[Token(Token = "0x2000017")]
public interface IProperty<TContainer> : IProperty, IPropertyAccept<TContainer>
{
}
