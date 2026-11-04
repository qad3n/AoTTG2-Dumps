// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ConverterGroup
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000029")]
public class ConverterGroup
{
	[Token(Token = "0x4000061")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly string _003Cid_003Ek__BackingField;

	[Token(Token = "0x4000062")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly string _003CdisplayName_003Ek__BackingField;

	[Token(Token = "0x4000063")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly string _003Cdescription_003Ek__BackingField;

	[Token(Token = "0x4000064")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Unity.Properties.ConversionRegistry m_Registry;

	[Token(Token = "0x17000031")]
	internal Unity.Properties.ConversionRegistry registry
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x181CEB0", Offset = "0x181B4B0", VA = "0x18181CEB0")]
		get
		{
			return default(Unity.Properties.ConversionRegistry);
		}
	}

	[Token(Token = "0x17000032")]
	internal unsafe ref Unity.Properties.ConversionRegistry registerRef
	{
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x308AF00", Offset = "0x3089500", VA = "0x18308AF00")]
		get
		{
			return ref *(Unity.Properties.ConversionRegistry*)null;
		}
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x308AE80", Offset = "0x3089480", VA = "0x18308AE80")]
	public ConverterGroup(string id, [Optional] string displayName, [Optional] string description)
	{
	}

	[Token(Token = "0x60000D1")]
	public bool TryConvert<TSource, TDestination>(ref TSource source, out TDestination destination)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	public bool TrySetValue<TContainer, TValue>(ref TContainer container, in PropertyPath path, TValue value, out VisitReturnCode returnCode)
	{
		return default(bool);
	}
}
