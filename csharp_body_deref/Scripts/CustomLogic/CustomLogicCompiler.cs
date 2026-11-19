// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCompiler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCompiler.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200063C")]
public class CustomLogicCompiler
{
	[Token(Token = "0x200063D")]
	private class FileRange
	{
		[Token(Token = "0x17000A72")]
		public string Name
		{
			[Token(Token = "0x6003C11")]
			[Address(RVA = "0x5A73C50", Offset = "0x5A72C50", VA = "0x5A73C50")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6003C12")]
			[Address(RVA = "0x5A73C60", Offset = "0x5A72C60", VA = "0x5A73C60")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000A73")]
		public CustomLogicSourceType Type
		{
			[Token(Token = "0x6003C13")]
			[Address(RVA = "0x5A73C70", Offset = "0x5A72C70", VA = "0x5A73C70")]
			[CompilerGenerated]
			get
			{
				return default(CustomLogicSourceType);
			}
			[Token(Token = "0x6003C14")]
			[Address(RVA = "0x5A73C80", Offset = "0x5A72C80", VA = "0x5A73C80")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000A74")]
		public int StartLine
		{
			[Token(Token = "0x6003C15")]
			[Address(RVA = "0x5A73C90", Offset = "0x5A72C90", VA = "0x5A73C90")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6003C16")]
			[Address(RVA = "0x5A73CA0", Offset = "0x5A72CA0", VA = "0x5A73CA0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000A75")]
		public int EndLine
		{
			[Token(Token = "0x6003C17")]
			[Address(RVA = "0x5A73CB0", Offset = "0x5A72CB0", VA = "0x5A73CB0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6003C18")]
			[Address(RVA = "0x5A73CC0", Offset = "0x5A72CC0", VA = "0x5A73CC0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000A76")]
		public int LineCount
		{
			[Token(Token = "0x6003C19")]
			[Address(RVA = "0x5A73CD0", Offset = "0x5A72CD0", VA = "0x5A73CD0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6003C1A")]
			[Address(RVA = "0x5A73CE0", Offset = "0x5A72CE0", VA = "0x5A73CE0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000A77")]
		public int MapLogicOffset
		{
			[Token(Token = "0x6003C1B")]
			[Address(RVA = "0x5A73CF0", Offset = "0x5A72CF0", VA = "0x5A73CF0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6003C1C")]
			[Address(RVA = "0x5A73D00", Offset = "0x5A72D00", VA = "0x5A73D00")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6003C1D")]
		[Address(RVA = "0x5A73590", Offset = "0x5A72590", VA = "0x5A73590")]
		public FileRange()
		{
		}
	}

	[Token(Token = "0x200063F")]
	[CompilerGenerated]
	private sealed class _003CGetFileInfo_003Ed__13 : IEnumerable<(string, CustomLogicSourceType, int, int)>, IEnumerable, IEnumerator<(string, CustomLogicSourceType, int, int)>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001B61")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001B62")]
		[FieldOffset(Offset = "0x18")]
		private (string Name, CustomLogicSourceType Type, int StartLine, int EndLine) _003C_003E2__current;

		[Token(Token = "0x4001B63")]
		[FieldOffset(Offset = "0x30")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4001B64")]
		[FieldOffset(Offset = "0x38")]
		public CustomLogicCompiler _003C_003E4__this;

		[Token(Token = "0x4001B65")]
		[FieldOffset(Offset = "0x40")]
		private List<FileRange>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000A78")]
		private (string, CustomLogicSourceType, int, int) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EStringName_002CCustomLogic_002ECustomLogicSourceTypeType_002CSystem_002EInt32StartLine_002CSystem_002EInt32EndLine_0029_003E_002ECurrent
		{
			[Token(Token = "0x6003C26")]
			[Address(RVA = "0x5A74090", Offset = "0x5A73090", VA = "0x5A74090", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default((string, CustomLogicSourceType, int, int));
			}
		}

		[Token(Token = "0x17000A79")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003C28")]
			[Address(RVA = "0x5A740F0", Offset = "0x5A730F0", VA = "0x5A740F0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003C22")]
		[Address(RVA = "0x5A738F0", Offset = "0x5A728F0", VA = "0x5A738F0")]
		[DebuggerHidden]
		public _003CGetFileInfo_003Ed__13(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003C23")]
		[Address(RVA = "0x5A73DC0", Offset = "0x5A72DC0", VA = "0x5A73DC0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003C24")]
		[Address(RVA = "0x5A73E10", Offset = "0x5A72E10", VA = "0x5A73E10", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003C25")]
		[Address(RVA = "0x5A74050", Offset = "0x5A73050", VA = "0x5A74050")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6003C27")]
		[Address(RVA = "0x5A740B0", Offset = "0x5A730B0", VA = "0x5A740B0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6003C29")]
		[Address(RVA = "0x5A74140", Offset = "0x5A73140", VA = "0x5A74140", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<(string, CustomLogicSourceType, int, int)> System_002ECollections_002EGeneric_002EIEnumerable_003C_0028System_002EStringName_002CCustomLogic_002ECustomLogicSourceTypeType_002CSystem_002EInt32StartLine_002CSystem_002EInt32EndLine_0029_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6003C2A")]
		[Address(RVA = "0x5A741E0", Offset = "0x5A731E0", VA = "0x5A741E0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4001B55")]
	[FieldOffset(Offset = "0x10")]
	private List<CustomLogicSourceFile> _sourceFiles;

	[Token(Token = "0x4001B56")]
	[FieldOffset(Offset = "0x18")]
	private List<FileRange> _fileRanges;

	[Token(Token = "0x4001B57")]
	[FieldOffset(Offset = "0x20")]
	private string _combinedSource;

	[Token(Token = "0x17000A70")]
	public int FileCount
	{
		[Token(Token = "0x6003C0C")]
		[Address(RVA = "0x5A73920", Offset = "0x5A72920", VA = "0x5A73920")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A71")]
	public int TotalLines
	{
		[Token(Token = "0x6003C0D")]
		[Address(RVA = "0x5A73960", Offset = "0x5A72960", VA = "0x5A73960")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003C02")]
	[Address(RVA = "0x5A72F40", Offset = "0x5A71F40", VA = "0x5A72F40")]
	public void AddSourceFile(CustomLogicSourceFile file)
	{
	}

	[Token(Token = "0x6003C03")]
	[Address(RVA = "0x5A72FE0", Offset = "0x5A71FE0", VA = "0x5A72FE0")]
	public void AddSourceFiles(IEnumerable<CustomLogicSourceFile> files)
	{
	}

	[Token(Token = "0x6003C04")]
	[Address(RVA = "0x5A73030", Offset = "0x5A72030", VA = "0x5A73030")]
	public string Compile()
	{
		return null;
	}

	[Token(Token = "0x6003C05")]
	[Address(RVA = "0x5A735A0", Offset = "0x5A725A0", VA = "0x5A735A0")]
	public string GetCombinedSource()
	{
		return null;
	}

	[Token(Token = "0x6003C06")]
	[Address(RVA = "0x5A735B0", Offset = "0x5A725B0", VA = "0x5A735B0")]
	public string FormatLineNumber(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6003C07")]
	[Address(RVA = "0x5A73700", Offset = "0x5A72700", VA = "0x5A73700")]
	private FileRange FindFileRange(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6003C08")]
	[Address(RVA = "0x5A737D0", Offset = "0x5A727D0", VA = "0x5A737D0")]
	public string GetFileNameForLine(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6003C09")]
	[Address(RVA = "0x5A737F0", Offset = "0x5A727F0", VA = "0x5A737F0")]
	public CustomLogicSourceType? GetFileTypeForLine(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6003C0A")]
	[Address(RVA = "0x5A73860", Offset = "0x5A72860", VA = "0x5A73860")]
	public int GetLocalLineNumber(int globalLine)
	{
		return default(int);
	}

	[Token(Token = "0x6003C0B")]
	[Address(RVA = "0x5A73880", Offset = "0x5A72880", VA = "0x5A73880")]
	[IteratorStateMachine(typeof(_003CGetFileInfo_003Ed__13))]
	public IEnumerable<(string, CustomLogicSourceType, int, int)> GetFileInfo()
	{
		return null;
	}

	[Token(Token = "0x6003C0E")]
	[Address(RVA = "0x5A739D0", Offset = "0x5A729D0", VA = "0x5A739D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6003C0F")]
	[Address(RVA = "0x5A73A70", Offset = "0x5A72A70", VA = "0x5A73A70")]
	public int GetBaseLogicOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6003C10")]
	[Address(RVA = "0x5A73B90", Offset = "0x5A72B90", VA = "0x5A73B90")]
	public CustomLogicCompiler()
	{
	}
}
