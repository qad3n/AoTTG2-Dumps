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

[Token(Token = "0x20005DD")]
public class CustomLogicCompiler
{
	[Token(Token = "0x20005DE")]
	private class FileRange
	{
		[Token(Token = "0x17000A2A")]
		public string Name
		{
			[Token(Token = "0x6003983")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6003984")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000A2B")]
		public CustomLogicSourceType Type
		{
			[Token(Token = "0x6003985")]
			[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
			[CompilerGenerated]
			get
			{
				return default(CustomLogicSourceType);
			}
			[Token(Token = "0x6003986")]
			[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000A2C")]
		public int StartLine
		{
			[Token(Token = "0x6003987")]
			[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6003988")]
			[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000A2D")]
		public int EndLine
		{
			[Token(Token = "0x6003989")]
			[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x600398A")]
			[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000A2E")]
		public int LineCount
		{
			[Token(Token = "0x600398B")]
			[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x600398C")]
			[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000A2F")]
		public int MapLogicOffset
		{
			[Token(Token = "0x600398D")]
			[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x600398E")]
			[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x600398F")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public FileRange()
		{
		}
	}

	[Token(Token = "0x20005E0")]
	[CompilerGenerated]
	private sealed class _003CGetFileInfo_003Ed__13 : IEnumerable<(string, CustomLogicSourceType, int, int)>, IEnumerable, IEnumerator<(string, CustomLogicSourceType, int, int)>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40019C0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40019C1")]
		[FieldOffset(Offset = "0x18")]
		private (string Name, CustomLogicSourceType Type, int StartLine, int EndLine) _003C_003E2__current;

		[Token(Token = "0x40019C2")]
		[FieldOffset(Offset = "0x30")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40019C3")]
		[FieldOffset(Offset = "0x38")]
		public CustomLogicCompiler _003C_003E4__this;

		[Token(Token = "0x40019C4")]
		[FieldOffset(Offset = "0x40")]
		private List<FileRange>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000A30")]
		private (string, CustomLogicSourceType, int, int) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EStringName_002CCustomLogic_002ECustomLogicSourceTypeType_002CSystem_002EInt32StartLine_002CSystem_002EInt32EndLine_0029_003E_002ECurrent
		{
			[Token(Token = "0x6003998")]
			[Address(RVA = "0x1164F60", Offset = "0x1163560", VA = "0x181164F60", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default((string, CustomLogicSourceType, int, int));
			}
		}

		[Token(Token = "0x17000A31")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600399A")]
			[Address(RVA = "0x20AB970", Offset = "0x20A9F70", VA = "0x1820AB970", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003994")]
		[Address(RVA = "0x139B890", Offset = "0x1399E90", VA = "0x18139B890")]
		[DebuggerHidden]
		public _003CGetFileInfo_003Ed__13(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003995")]
		[Address(RVA = "0x20AB9C0", Offset = "0x20A9FC0", VA = "0x1820AB9C0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003996")]
		[Address(RVA = "0x20AB660", Offset = "0x20A9C60", VA = "0x1820AB660", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003997")]
		[Address(RVA = "0x20ABA50", Offset = "0x20AA050", VA = "0x1820ABA50")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6003999")]
		[Address(RVA = "0x20AB930", Offset = "0x20A9F30", VA = "0x1820AB930", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600399B")]
		[Address(RVA = "0x20AB890", Offset = "0x20A9E90", VA = "0x1820AB890", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<(string, CustomLogicSourceType, int, int)> System_002ECollections_002EGeneric_002EIEnumerable_003C_0028System_002EStringName_002CCustomLogic_002ECustomLogicSourceTypeType_002CSystem_002EInt32StartLine_002CSystem_002EInt32EndLine_0029_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600399C")]
		[Address(RVA = "0x20AB890", Offset = "0x20A9E90", VA = "0x1820AB890", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40019B4")]
	[FieldOffset(Offset = "0x10")]
	private List<CustomLogicSourceFile> _sourceFiles;

	[Token(Token = "0x40019B5")]
	[FieldOffset(Offset = "0x18")]
	private List<FileRange> _fileRanges;

	[Token(Token = "0x40019B6")]
	[FieldOffset(Offset = "0x20")]
	private string _combinedSource;

	[Token(Token = "0x17000A28")]
	public int FileCount
	{
		[Token(Token = "0x600397E")]
		[Address(RVA = "0x209DEB0", Offset = "0x209C4B0", VA = "0x18209DEB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A29")]
	public int TotalLines
	{
		[Token(Token = "0x600397F")]
		[Address(RVA = "0x209DEF0", Offset = "0x209C4F0", VA = "0x18209DEF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003974")]
	[Address(RVA = "0x209D2F0", Offset = "0x209B8F0", VA = "0x18209D2F0")]
	public void AddSourceFile(CustomLogicSourceFile file)
	{
	}

	[Token(Token = "0x6003975")]
	[Address(RVA = "0x209D3A0", Offset = "0x209B9A0", VA = "0x18209D3A0")]
	public void AddSourceFiles(IEnumerable<CustomLogicSourceFile> files)
	{
	}

	[Token(Token = "0x6003976")]
	[Address(RVA = "0x209D4B0", Offset = "0x209BAB0", VA = "0x18209D4B0")]
	public string Compile()
	{
		return null;
	}

	[Token(Token = "0x6003977")]
	[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
	public string GetCombinedSource()
	{
		return null;
	}

	[Token(Token = "0x6003978")]
	[Address(RVA = "0x209DA50", Offset = "0x209C050", VA = "0x18209DA50")]
	public string FormatLineNumber(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x6003979")]
	[Address(RVA = "0x209D980", Offset = "0x209BF80", VA = "0x18209D980")]
	private FileRange FindFileRange(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x600397A")]
	[Address(RVA = "0x209DD20", Offset = "0x209C320", VA = "0x18209DD20")]
	public string GetFileNameForLine(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x600397B")]
	[Address(RVA = "0x209DD40", Offset = "0x209C340", VA = "0x18209DD40")]
	public CustomLogicSourceType? GetFileTypeForLine(int globalLine)
	{
		return null;
	}

	[Token(Token = "0x600397C")]
	[Address(RVA = "0x209DDC0", Offset = "0x209C3C0", VA = "0x18209DDC0")]
	public int GetLocalLineNumber(int globalLine)
	{
		return default(int);
	}

	[Token(Token = "0x600397D")]
	[Address(RVA = "0x209DCA0", Offset = "0x209C2A0", VA = "0x18209DCA0")]
	[IteratorStateMachine(typeof(_003CGetFileInfo_003Ed__13))]
	public IEnumerable<(string, CustomLogicSourceType, int, int)> GetFileInfo()
	{
		return null;
	}

	[Token(Token = "0x6003980")]
	[Address(RVA = "0x209D400", Offset = "0x209BA00", VA = "0x18209D400")]
	public void Clear()
	{
	}

	[Token(Token = "0x6003981")]
	[Address(RVA = "0x209DB70", Offset = "0x209C170", VA = "0x18209DB70")]
	public int GetBaseLogicOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6003982")]
	[Address(RVA = "0x209DDF0", Offset = "0x209C3F0", VA = "0x18209DDF0")]
	public CustomLogicCompiler()
	{
	}
}
