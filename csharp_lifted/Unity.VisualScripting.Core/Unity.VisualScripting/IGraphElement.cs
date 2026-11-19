// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IGraphElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200007F")]
public interface IGraphElement : IGraphItem, INotifiedCollectionItem, IDisposable, IPrewarmable, IAotStubbable, IIdentifiable, IAnalyticsIdentifiable
{
	[Token(Token = "0x170000E7")]
	new IGraph graph
	{
		[Token(Token = "0x60003DF")]
		get;
		[Token(Token = "0x60003E0")]
		set;
	}

	[Token(Token = "0x170000E8")]
	int dependencyOrder
	{
		[Token(Token = "0x60003E2")]
		get;
	}

	[Token(Token = "0x170000E9")]
	new Guid guid
	{
		[Token(Token = "0x60003E3")]
		get;
		[Token(Token = "0x60003E4")]
		set;
	}

	[Token(Token = "0x170000EA")]
	IEnumerable<ISerializationDependency> deserializationDependencies
	{
		[Token(Token = "0x60003E7")]
		get;
	}

	[Token(Token = "0x60003E1")]
	bool HandleDependencies();

	[Token(Token = "0x60003E5")]
	void Instantiate(GraphReference instance);

	[Token(Token = "0x60003E6")]
	void Uninstantiate(GraphReference instance);
}
