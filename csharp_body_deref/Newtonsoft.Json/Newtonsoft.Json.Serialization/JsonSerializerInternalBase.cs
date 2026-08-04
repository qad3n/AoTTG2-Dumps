// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.JsonSerializerInternalBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000125")]
internal abstract class JsonSerializerInternalBase
{
	[Token(Token = "0x2000126")]
	private class ReferenceEqualsEqualityComparer : IEqualityComparer<object>
	{
		[Token(Token = "0x60008AF")]
		[Address(RVA = "0x3DDB760", Offset = "0x3DDB760", VA = "0x3DDB760", Slot = "4")]
		private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EEquals(object? x, object? y)
		{
			return default(bool);
		}

		[Token(Token = "0x60008B0")]
		[Address(RVA = "0x3DDB770", Offset = "0x3DDB770", VA = "0x3DDB770", Slot = "5")]
		private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EGetHashCode(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x3DDB0F0", Offset = "0x3DDB0F0", VA = "0x3DDB0F0")]
		public ReferenceEqualsEqualityComparer()
		{
		}
	}

	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0x10")]
	private ErrorContext? _currentErrorContext;

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0x18")]
	private BidirectionalDictionary<string, object>? _mappings;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0x20")]
	internal readonly JsonSerializer Serializer;

	[Token(Token = "0x400058D")]
	[FieldOffset(Offset = "0x28")]
	internal readonly ITraceWriter? TraceWriter;

	[Token(Token = "0x400058E")]
	[FieldOffset(Offset = "0x30")]
	protected JsonSerializerProxy? InternalSerializer;

	[Token(Token = "0x1700014D")]
	internal BidirectionalDictionary<string, object> DefaultReferenceMappings
	{
		[Token(Token = "0x60008AA")]
		[Address(RVA = "0x3DD56A0", Offset = "0x3DD56A0", VA = "0x3DD56A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x3DDB030", Offset = "0x3DDB030", VA = "0x3DDB030")]
	protected JsonSerializerInternalBase(JsonSerializer serializer)
	{
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x3DDB100", Offset = "0x3DDB100", VA = "0x3DDB100")]
	protected NullValueHandling ResolvedNullValueHandling(JsonObjectContract? containerContract, JsonProperty property)
	{
		return default(NullValueHandling);
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x3DDB180", Offset = "0x3DDB180", VA = "0x3DDB180")]
	private ErrorContext GetErrorContext(object? currentObject, object? member, string path, Exception error)
	{
		return null;
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x3DDB2A0", Offset = "0x3DDB2A0", VA = "0x3DDB2A0")]
	protected void ClearErrorContext()
	{
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x3DDB310", Offset = "0x3DDB310", VA = "0x3DDB310")]
	protected bool IsErrorHandled(object? currentObject, JsonContract? contract, object? keyValue, IJsonLineInfo? lineInfo, string path, Exception ex)
	{
		return default(bool);
	}
}
