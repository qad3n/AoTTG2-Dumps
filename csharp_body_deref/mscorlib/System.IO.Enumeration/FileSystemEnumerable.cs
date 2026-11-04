// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Enumeration.FileSystemEnumerable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.IO.Enumeration;

[Token(Token = "0x20006AE")]
public class FileSystemEnumerable<TResult> : IEnumerable<TResult>, IEnumerable
{
	[Token(Token = "0x20006AF")]
	public delegate bool FindPredicate(ref FileSystemEntry entry);

	[Token(Token = "0x20006B0")]
	public delegate TResult FindTransform(ref FileSystemEntry entry);

	[Token(Token = "0x20006B1")]
	private sealed class DelegateEnumerator : FileSystemEnumerator<TResult>
	{
		[Token(Token = "0x4001B1D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly FileSystemEnumerable<TResult> _enumerable;

		[Token(Token = "0x60033F4")]
		public DelegateEnumerator(FileSystemEnumerable<TResult> enumerable)
		{
		}

		[Token(Token = "0x60033F5")]
		protected override TResult TransformEntry(ref FileSystemEntry entry)
		{
			return (TResult)null;
		}

		[Token(Token = "0x60033F6")]
		protected override bool ShouldRecurseIntoEntry(ref FileSystemEntry entry)
		{
			return default(bool);
		}

		[Token(Token = "0x60033F7")]
		protected override bool ShouldIncludeEntry(ref FileSystemEntry entry)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4001B17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private DelegateEnumerator _enumerator;

	[Token(Token = "0x4001B18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly FindTransform _transform;

	[Token(Token = "0x4001B19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly EnumerationOptions _options;

	[Token(Token = "0x4001B1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _directory;

	[Token(Token = "0x17000850")]
	public FindPredicate ShouldIncludePredicate
	{
		[Token(Token = "0x60033EB")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60033EC")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000851")]
	public FindPredicate ShouldRecursePredicate
	{
		[Token(Token = "0x60033ED")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60033EA")]
	public FileSystemEnumerable(string directory, FindTransform transform, [Optional] EnumerationOptions options)
	{
	}

	[Token(Token = "0x60033EE")]
	public IEnumerator<TResult> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60033EF")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
