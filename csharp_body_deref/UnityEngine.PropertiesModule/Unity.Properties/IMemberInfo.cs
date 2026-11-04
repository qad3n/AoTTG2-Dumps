// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IMemberInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200001D")]
internal interface IMemberInfo
{
	[Token(Token = "0x17000015")]
	string Name
	{
		[Token(Token = "0x600006A")]
		get;
	}

	[Token(Token = "0x17000016")]
	bool IsReadOnly
	{
		[Token(Token = "0x600006B")]
		get;
	}

	[Token(Token = "0x17000017")]
	Type ValueType
	{
		[Token(Token = "0x600006C")]
		get;
	}

	[Token(Token = "0x600006D")]
	object GetValue(object obj);

	[Token(Token = "0x600006E")]
	void SetValue(object obj, object value);

	[Token(Token = "0x600006F")]
	IEnumerable<Attribute> GetCustomAttributes();
}
