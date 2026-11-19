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
		[Address(RVA = "0x55D3DC0", Offset = "0x55D2DC0", VA = "0x55D3DC0", Slot = "4")]
		private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EEquals(object? x, object? y)
		{
			return default(bool);
		}

		[Token(Token = "0x60008B0")]
		[Address(RVA = "0x55D3DD0", Offset = "0x55D2DD0", VA = "0x55D3DD0", Slot = "5")]
		private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EGetHashCode(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x55D3750", Offset = "0x55D2750", VA = "0x55D3750")]
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
		[Address(RVA = "0x55CDE80", Offset = "0x55CCE80", VA = "0x55CDE80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x55D3690", Offset = "0x55D2690", VA = "0x55D3690")]
	protected JsonSerializerInternalBase(JsonSerializer serializer)
	{
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x55D3760", Offset = "0x55D2760", VA = "0x55D3760")]
	protected NullValueHandling ResolvedNullValueHandling(JsonObjectContract? containerContract, JsonProperty property)
	{
		return default(NullValueHandling);
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x55D37E0", Offset = "0x55D27E0", VA = "0x55D37E0")]
	private ErrorContext GetErrorContext(object? currentObject, object? member, string path, Exception error)
	{
		return null;
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x55D3900", Offset = "0x55D2900", VA = "0x55D3900")]
	protected void ClearErrorContext()
	{
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x55D3970", Offset = "0x55D2970", VA = "0x55D3970")]
	protected bool IsErrorHandled(object? currentObject, JsonContract? contract, object? keyValue, IJsonLineInfo? lineInfo, string path, Exception ex)
	{
		return default(bool);
	}
}
