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
	[Token(Token = "0x170000E4")]
	new IGraph graph
	{
		[Token(Token = "0x60003D5")]
		get;
		[Token(Token = "0x60003D6")]
		set;
	}

	[Token(Token = "0x170000E5")]
	int dependencyOrder
	{
		[Token(Token = "0x60003D8")]
		get;
	}

	[Token(Token = "0x170000E6")]
	new Guid guid
	{
		[Token(Token = "0x60003D9")]
		get;
		[Token(Token = "0x60003DA")]
		set;
	}

	[Token(Token = "0x170000E7")]
	IEnumerable<ISerializationDependency> deserializationDependencies
	{
		[Token(Token = "0x60003DD")]
		get;
	}

	[Token(Token = "0x60003D7")]
	bool HandleDependencies();

	[Token(Token = "0x60003DB")]
	void Instantiate(GraphReference instance);

	[Token(Token = "0x60003DC")]
	void Uninstantiate(GraphReference instance);
}
