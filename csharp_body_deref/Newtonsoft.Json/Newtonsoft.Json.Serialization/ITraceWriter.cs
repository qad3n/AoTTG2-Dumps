// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.ITraceWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000110")]
public interface ITraceWriter
{
	[Token(Token = "0x170000F8")]
	TraceLevel LevelFilter
	{
		[Token(Token = "0x60007C8")]
		get;
	}

	[Token(Token = "0x60007C9")]
	void Trace(TraceLevel level, string message, Exception? ex);
}
