// ==================== AoTTG2 cross-reference ====================
// Type: System.Lazy
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Threading;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200010B")]
[DebuggerDisplay("ThreadSafetyMode={Mode}, IsValueCreated={IsValueCreated}, IsValueFaulted={IsValueFaulted}, Value={ValueForDebugDisplay}")]
[DebuggerTypeProxy(typeof(System.LazyDebugView<>))]
public class Lazy<T>
{
	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x0")]
	private System.LazyHelper _state;

	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x0")]
	private Func<T> _factory;

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x0")]
	private T _value;

	[Token(Token = "0x17000092")]
	public bool IsValueCreated
	{
		[Token(Token = "0x6000870")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000093")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public T Value
	{
		[Token(Token = "0x6000871")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x6000861")]
	private static T CreateViaDefaultConstructor()
	{
		return (T)null;
	}

	[Token(Token = "0x6000862")]
	public Lazy()
	{
	}

	[Token(Token = "0x6000863")]
	public Lazy(Func<T> valueFactory)
	{
	}

	[Token(Token = "0x6000864")]
	public Lazy(bool isThreadSafe)
	{
	}

	[Token(Token = "0x6000865")]
	public Lazy(Func<T> valueFactory, bool isThreadSafe)
	{
	}

	[Token(Token = "0x6000866")]
	private Lazy(Func<T> valueFactory, LazyThreadSafetyMode mode, bool useDefaultConstructor)
	{
	}

	[Token(Token = "0x6000867")]
	private void ViaConstructor()
	{
	}

	[Token(Token = "0x6000868")]
	private void ViaFactory(LazyThreadSafetyMode mode)
	{
	}

	[Token(Token = "0x6000869")]
	private void ExecutionAndPublication(System.LazyHelper executionAndPublication, bool useDefaultConstructor)
	{
	}

	[Token(Token = "0x600086A")]
	private void PublicationOnly(System.LazyHelper publicationOnly, T possibleValue)
	{
	}

	[Token(Token = "0x600086B")]
	private void PublicationOnlyViaConstructor(System.LazyHelper initializer)
	{
	}

	[Token(Token = "0x600086C")]
	private void PublicationOnlyViaFactory(System.LazyHelper initializer)
	{
	}

	[Token(Token = "0x600086D")]
	private void PublicationOnlyWaitForOtherThreadToPublish()
	{
	}

	[Token(Token = "0x600086E")]
	private T CreateValue()
	{
		return (T)null;
	}

	[Token(Token = "0x600086F")]
	public override string ToString()
	{
		return null;
	}
}
