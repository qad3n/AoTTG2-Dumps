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

[Token(Token = "0x2000486")]
public class CustomLogicCompiler
{
	[Token(Token = "0x2000487")]
	private class FileRange
	{
		[Token(Token = "0x17000933")]
		public string Name
		{
			[Token(Token = "0x6003004")]
			[Address(RVA = "0x415BD00", Offset = "0x415BD00", VA = "0x415BD00")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6003005")]
			[Address(RVA = "0x415BD10", Offset = "0x415BD10", VA = "0x415BD10")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000934")]
		public CustomLogicSourceType Type
		{
			[Token(Token = "0x6003006")]
			[Address(RVA = "0x415BD20", Offset = "0x415BD20", VA = "0x415BD20")]
			[CompilerGenerated]
			get
			{
				return default(CustomLogicSourceType);
			}
			[Token(Token = "0x6003007")]
			[Address(RVA = "0x415BD30", Offset = "0x415BD30", VA = "0x415BD30")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000935")]
		public int StartLine
		{
			[Token(Token = "0x6003008")]
			[Address(RVA = "0x415BD40", Offset = "0x415BD40", VA = "0x415BD40")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6003009")]
			[Address(RVA = "0x415BD50", Offset = "0x415BD50", VA = "0x415BD50")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000936")]
		public int EndLine
		{
			[Token(Token = "0x600300A")]
			[Address(RVA = "0x415BD60", Offset = "0x415BD60", VA = "0x415BD60")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x600300B")]
			[Address(RVA = "0x415BD70", Offset = "0x415BD70", VA = "0x415BD70")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000937")]
		public int LineCount
		{
			[Token(Token = "0x600300C")]
			[Address(RVA = "0x415BD80", Offset = "0x415BD80", VA = "0x415BD80")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x600300D")]
			[Address(RVA = "0x415BD90", Offset = "0x415BD90", VA = "0x415BD90")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000938")]
		public int MapLogicOffset
		{
			[Token(Token = "0x600300E")]
			[Address(RVA = "0x415BDA0", Offset = "0x415BDA0", VA = "0x415BDA0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x600300F")]
			[Address(RVA = "0x415BDB0", Offset = "0x415BDB0", VA = "0x415BDB0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6003010")]
		[Address(RVA = "0x415B630", Offset = "0x415B630", VA = "0x415B630")]
		public FileRange()
		{
		}
	}

	[Token(Token = "0x2000489")]
	[CompilerGenerated]
	private sealed class _003CGetFileInfo_003Ed__13 : IEnumerable<(string, CustomLogicSourceType, int, int)>, IEnumerable, IEnumerator<(string, CustomLogicSourceType, int, int)>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400137A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400137B")]
		[FieldOffset(Offset = "0x18")]
		private (string Name, CustomLogicSourceType Type, int StartLine, int EndLine) _003C_003E2__current;

		[Token(Token = "0x400137C")]
		[FieldOffset(Offset = "0x30")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400137D")]
		[FieldOffset(Offset = "0x38")]
		public CustomLogicCompiler _003C_003E4__this;

		[Token(Token = "0x400137E")]
		[FieldOffset(Offset = "0x40")]
		private List<FileRange>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000939")]
		private (string, CustomLogicSourceType, int, int) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EStringName_002CCustomLogic_002ECustomLogicSourceTypeType_002CSystem_002EInt32StartLine_002CSystem_002EInt32EndLine_0029_003E_002ECurrent
		{
			[Token(Token = "0x6003019")]
			[Address(RVA = "0x415C170", Offset = "0x415C170", VA = "0x415C170", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default((string, CustomLogicSourceType, int, int));
			}
		}

		[Token(Token = "0x1700093A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600301B")]
			[Address(RVA = "0x415C1D0", Offset = "0x415C1D0", VA = "0x415C1D0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003015")]
		[Address(RVA = "0x415B9A0", Offset = "0x415B9A0", VA = "0x415B9A0")]
		[DebuggerHidden]
		public _003CGetFileInfo_003Ed__13(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003016")]
		[Address(RVA = "0x415BE70", Offset = "0x415BE70", VA = "0x415BE70", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003017")]
		[Address(RVA = "0x415BEC0", Offset = "0x415BEC0", VA = "0x415BEC0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003018")]
		[Address(RVA = "0x415C130", Offset = "0x415C130", VA = "0x415C130")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600301A")]
		[Address(RVA = "0x415C190", Offset = "0x415C190", VA = "0x415C190", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600301C")]
		[Address(RVA = "0x415C220", Offset = "0x415C220", VA = "0x415C220", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<(string, CustomLogicSourceType, int, int)> System_002ECollections_002EGeneric_002EIEnumerable_003C_0028System_002EStringName_002CCustomLogic_002ECustomLogicSourceTypeType_002CSystem_002EInt32StartLine_002CSystem_002EInt32EndLine_0029_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600301D")]
		[Address(RVA = "0x415C2C0", Offset = "0x415C2C0", VA = "0x415C2C0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x400136E")]
	[FieldOffset(Offset = "0x10")]
	private List<CustomLogicSourceFile> _sourceFiles;

	[Token(Token = "0x400136F")]
	[FieldOffset(Offset = "0x18")]
	private List<FileRange> _fileRanges;

	[Token(Token = "0x4001370")]
	[FieldOffset(Offset = "0x20")]
	private string _combinedSource;

	[Token(Token = "0x17000931")]
	public int FileCount
	{
		[Token(Token = "0x6002FFF")]
		[Address(RVA = "0x415B9D0", Offset = "0x415B9D0", VA = "0x415B9D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000932")]
	public int TotalLines
	{
		[Token(Token = "0x6003000")]
		[Address(RVA = "0x415BA10", Offset = "0x415BA10", VA = "0x415BA10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002FF5")]
	[Address(RVA = "0x415AE20", Offset = "0x415AE20", VA = "0x415AE20")]
	public void AddSourceFile(CustomLogicSourceFile file)
	{
	}

	[Token(Token = "0x6002FF6")]
	[Address(RVA = "0x415AEC0", Offset = "0x415AEC0", VA = "0x415AEC0")]
	public void AddSourceFiles(IEnumerable<CustomLogicSourceFile> files)
	{
	}

	[Token(Token = "0x6002FF7")]
	[Address(RVA = "0x415AF10", Offset = "0x415AF10", VA = "0x415AF10")]
	public string Compile()
	{
		return null;
	}

	[Token(Token = "0x6002FF8")]
	[Address(RVA = "0x415B640", Offset = "0x415B640", VA = "0x415B640")]
	public string GetCombinedSource()
	{
		return null;
	}

	[Token(Token = "0x6002FF9")]
	[Address(RVA = "0x415B650", Offset = "0x415B650", VA = "0x415B650")]
	public string FormatLineNumber(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6002FFA")]
	[Address(RVA = "0x415B7A0", Offset = "0x415B7A0", VA = "0x415B7A0")]
	private FileRange FindFileRange(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6002FFB")]
	[Address(RVA = "0x415B870", Offset = "0x415B870", VA = "0x415B870")]
	public string GetFileNameForLine(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6002FFC")]
	[Address(RVA = "0x415B890", Offset = "0x415B890", VA = "0x415B890")]
	public CustomLogicSourceType? GetFileTypeForLine(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6002FFD")]
	[Address(RVA = "0x415B900", Offset = "0x415B900", VA = "0x415B900")]
	public int GetLocalLineNumber(int globalLine)
	{
		return default(int);
	}

	[Token(Token = "0x6002FFE")]
	[Address(RVA = "0x415B920", Offset = "0x415B920", VA = "0x415B920")]
	[IteratorStateMachine(typeof(_003CGetFileInfo_003Ed__13))]
	public IEnumerable<(string, CustomLogicSourceType, int, int)> GetFileInfo()
	{
		return null;
	}

	[Token(Token = "0x6003001")]
	[Address(RVA = "0x415BA80", Offset = "0x415BA80", VA = "0x415BA80")]
	public void Clear()
	{
	}

	[Token(Token = "0x6003002")]
	[Address(RVA = "0x415BB20", Offset = "0x415BB20", VA = "0x415BB20")]
	public int GetBaseLogicOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6003003")]
	[Address(RVA = "0x415BC40", Offset = "0x415BC40", VA = "0x415BC40")]
	public CustomLogicCompiler()
	{
	}
}
