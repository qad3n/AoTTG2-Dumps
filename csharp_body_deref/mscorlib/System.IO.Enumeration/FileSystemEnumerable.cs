using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.IO.Enumeration;

[Token(Token = "0x2000586")]
public class FileSystemEnumerable<TResult> : IEnumerable<TResult>, IEnumerable
{
	[Token(Token = "0x2000587")]
	public delegate bool FindPredicate(ref FileSystemEntry entry);

	[Token(Token = "0x2000588")]
	public delegate TResult FindTransform(ref FileSystemEntry entry);

	[Token(Token = "0x2000589")]
	private sealed class DelegateEnumerator : FileSystemEnumerator<TResult>
	{
		[Token(Token = "0x400173D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly FileSystemEnumerable<TResult> _enumerable;

		[Token(Token = "0x6002B14")]
		public DelegateEnumerator(FileSystemEnumerable<TResult> enumerable)
		{
		}

		[Token(Token = "0x6002B15")]
		protected override TResult TransformEntry(ref FileSystemEntry entry)
		{
			return (TResult)null;
		}

		[Token(Token = "0x6002B16")]
		protected override bool ShouldRecurseIntoEntry(ref FileSystemEntry entry)
		{
			return default(bool);
		}

		[Token(Token = "0x6002B17")]
		protected override bool ShouldIncludeEntry(ref FileSystemEntry entry)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4001737")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private DelegateEnumerator _enumerator;

	[Token(Token = "0x4001738")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly FindTransform _transform;

	[Token(Token = "0x4001739")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly EnumerationOptions _options;

	[Token(Token = "0x400173A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _directory;

	[Token(Token = "0x17000639")]
	public FindPredicate ShouldIncludePredicate
	{
		[Token(Token = "0x6002B0B")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B0C")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700063A")]
	public FindPredicate ShouldRecursePredicate
	{
		[Token(Token = "0x6002B0D")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002B0A")]
	public FileSystemEnumerable(string directory, FindTransform transform, [Optional] EnumerationOptions options)
	{
	}

	[Token(Token = "0x6002B0E")]
	public IEnumerator<TResult> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002B0F")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
