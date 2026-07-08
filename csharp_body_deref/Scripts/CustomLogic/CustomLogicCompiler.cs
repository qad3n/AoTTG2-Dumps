using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000441")]
public class CustomLogicCompiler
{
	[Token(Token = "0x2000442")]
	private class FileRange
	{
		[Token(Token = "0x170008C9")]
		public string Name
		{
			[Token(Token = "0x6002DFA")]
			[Address(RVA = "0x3E50540", Offset = "0x3E50540", VA = "0x3E50540")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002DFB")]
			[Address(RVA = "0x3E50550", Offset = "0x3E50550", VA = "0x3E50550")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170008CA")]
		public CustomLogicSourceType Type
		{
			[Token(Token = "0x6002DFC")]
			[Address(RVA = "0x3E50560", Offset = "0x3E50560", VA = "0x3E50560")]
			[CompilerGenerated]
			get
			{
				return default(CustomLogicSourceType);
			}
			[Token(Token = "0x6002DFD")]
			[Address(RVA = "0x3E50570", Offset = "0x3E50570", VA = "0x3E50570")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170008CB")]
		public int StartLine
		{
			[Token(Token = "0x6002DFE")]
			[Address(RVA = "0x3E50580", Offset = "0x3E50580", VA = "0x3E50580")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6002DFF")]
			[Address(RVA = "0x3E50590", Offset = "0x3E50590", VA = "0x3E50590")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170008CC")]
		public int EndLine
		{
			[Token(Token = "0x6002E00")]
			[Address(RVA = "0x3E505A0", Offset = "0x3E505A0", VA = "0x3E505A0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6002E01")]
			[Address(RVA = "0x3E505B0", Offset = "0x3E505B0", VA = "0x3E505B0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170008CD")]
		public int LineCount
		{
			[Token(Token = "0x6002E02")]
			[Address(RVA = "0x3E505C0", Offset = "0x3E505C0", VA = "0x3E505C0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6002E03")]
			[Address(RVA = "0x3E505D0", Offset = "0x3E505D0", VA = "0x3E505D0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170008CE")]
		public int MapLogicOffset
		{
			[Token(Token = "0x6002E04")]
			[Address(RVA = "0x3E505E0", Offset = "0x3E505E0", VA = "0x3E505E0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6002E05")]
			[Address(RVA = "0x3E505F0", Offset = "0x3E505F0", VA = "0x3E505F0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6002E06")]
		[Address(RVA = "0x3E4FE70", Offset = "0x3E4FE70", VA = "0x3E4FE70")]
		public FileRange()
		{
		}
	}

	[Token(Token = "0x2000444")]
	[CompilerGenerated]
	private sealed class _003CGetFileInfo_003Ed__13 : IEnumerable<(string, CustomLogicSourceType, int, int)>, IEnumerable, IEnumerator<(string, CustomLogicSourceType, int, int)>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400126E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400126F")]
		[FieldOffset(Offset = "0x18")]
		private (string Name, CustomLogicSourceType Type, int StartLine, int EndLine) _003C_003E2__current;

		[Token(Token = "0x4001270")]
		[FieldOffset(Offset = "0x30")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4001271")]
		[FieldOffset(Offset = "0x38")]
		public CustomLogicCompiler _003C_003E4__this;

		[Token(Token = "0x4001272")]
		[FieldOffset(Offset = "0x40")]
		private List<FileRange>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x170008CF")]
		private (string, CustomLogicSourceType, int, int) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EStringName_002CCustomLogic_002ECustomLogicSourceTypeType_002CSystem_002EInt32StartLine_002CSystem_002EInt32EndLine_0029_003E_002ECurrent
		{
			[Token(Token = "0x6002E0F")]
			[Address(RVA = "0x3E509B0", Offset = "0x3E509B0", VA = "0x3E509B0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default((string, CustomLogicSourceType, int, int));
			}
		}

		[Token(Token = "0x170008D0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002E11")]
			[Address(RVA = "0x3E50A10", Offset = "0x3E50A10", VA = "0x3E50A10", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002E0B")]
		[Address(RVA = "0x3E501E0", Offset = "0x3E501E0", VA = "0x3E501E0")]
		[DebuggerHidden]
		public _003CGetFileInfo_003Ed__13(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002E0C")]
		[Address(RVA = "0x3E506B0", Offset = "0x3E506B0", VA = "0x3E506B0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002E0D")]
		[Address(RVA = "0x3E50700", Offset = "0x3E50700", VA = "0x3E50700", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002E0E")]
		[Address(RVA = "0x3E50970", Offset = "0x3E50970", VA = "0x3E50970")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002E10")]
		[Address(RVA = "0x3E509D0", Offset = "0x3E509D0", VA = "0x3E509D0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6002E12")]
		[Address(RVA = "0x3E50A60", Offset = "0x3E50A60", VA = "0x3E50A60", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<(string, CustomLogicSourceType, int, int)> System_002ECollections_002EGeneric_002EIEnumerable_003C_0028System_002EStringName_002CCustomLogic_002ECustomLogicSourceTypeType_002CSystem_002EInt32StartLine_002CSystem_002EInt32EndLine_0029_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002E13")]
		[Address(RVA = "0x3E50B00", Offset = "0x3E50B00", VA = "0x3E50B00", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4001262")]
	[FieldOffset(Offset = "0x10")]
	private List<CustomLogicSourceFile> _sourceFiles;

	[Token(Token = "0x4001263")]
	[FieldOffset(Offset = "0x18")]
	private List<FileRange> _fileRanges;

	[Token(Token = "0x4001264")]
	[FieldOffset(Offset = "0x20")]
	private string _combinedSource;

	[Token(Token = "0x170008C7")]
	public int FileCount
	{
		[Token(Token = "0x6002DF5")]
		[Address(RVA = "0x3E50210", Offset = "0x3E50210", VA = "0x3E50210")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170008C8")]
	public int TotalLines
	{
		[Token(Token = "0x6002DF6")]
		[Address(RVA = "0x3E50250", Offset = "0x3E50250", VA = "0x3E50250")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002DEB")]
	[Address(RVA = "0x3E4F6E0", Offset = "0x3E4F6E0", VA = "0x3E4F6E0")]
	public void AddSourceFile(CustomLogicSourceFile file)
	{
	}

	[Token(Token = "0x6002DEC")]
	[Address(RVA = "0x3E4F780", Offset = "0x3E4F780", VA = "0x3E4F780")]
	public void AddSourceFiles(IEnumerable<CustomLogicSourceFile> files)
	{
	}

	[Token(Token = "0x6002DED")]
	[Address(RVA = "0x3E4F7D0", Offset = "0x3E4F7D0", VA = "0x3E4F7D0")]
	public string Compile()
	{
		return null;
	}

	[Token(Token = "0x6002DEE")]
	[Address(RVA = "0x3E4FE80", Offset = "0x3E4FE80", VA = "0x3E4FE80")]
	public string GetCombinedSource()
	{
		return null;
	}

	[Token(Token = "0x6002DEF")]
	[Address(RVA = "0x3E4FE90", Offset = "0x3E4FE90", VA = "0x3E4FE90")]
	public string FormatLineNumber(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6002DF0")]
	[Address(RVA = "0x3E4FFE0", Offset = "0x3E4FFE0", VA = "0x3E4FFE0")]
	private FileRange FindFileRange(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6002DF1")]
	[Address(RVA = "0x3E500B0", Offset = "0x3E500B0", VA = "0x3E500B0")]
	public string GetFileNameForLine(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6002DF2")]
	[Address(RVA = "0x3E500D0", Offset = "0x3E500D0", VA = "0x3E500D0")]
	public CustomLogicSourceType? GetFileTypeForLine(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6002DF3")]
	[Address(RVA = "0x3E50140", Offset = "0x3E50140", VA = "0x3E50140")]
	public int GetLocalLineNumber(int globalLine)
	{
		return default(int);
	}

	[Token(Token = "0x6002DF4")]
	[Address(RVA = "0x3E50160", Offset = "0x3E50160", VA = "0x3E50160")]
	[IteratorStateMachine(typeof(_003CGetFileInfo_003Ed__13))]
	public IEnumerable<(string, CustomLogicSourceType, int, int)> GetFileInfo()
	{
		return null;
	}

	[Token(Token = "0x6002DF7")]
	[Address(RVA = "0x3E502C0", Offset = "0x3E502C0", VA = "0x3E502C0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002DF8")]
	[Address(RVA = "0x3E50360", Offset = "0x3E50360", VA = "0x3E50360")]
	public int GetBaseLogicOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6002DF9")]
	[Address(RVA = "0x3E50480", Offset = "0x3E50480", VA = "0x3E50480")]
	public CustomLogicCompiler()
	{
	}
}
