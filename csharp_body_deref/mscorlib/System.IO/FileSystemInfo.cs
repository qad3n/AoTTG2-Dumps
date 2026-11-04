// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileSystemInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO.Enumeration;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000689")]
public abstract class FileSystemInfo : MarshalByRefObject, ISerializable
{
	[Token(Token = "0x4001A4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private global::Interop.Kernel32.WIN32_FILE_ATTRIBUTE_DATA _data;

	[Token(Token = "0x4001A4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private int _dataInitialized;

	[Token(Token = "0x4001A4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected string FullPath;

	[Token(Token = "0x4001A4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected string OriginalPath;

	[Token(Token = "0x4001A4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal string _name;

	[Token(Token = "0x17000815")]
	public FileAttributes Attributes
	{
		[Token(Token = "0x600324A")]
		[Address(RVA = "0x1AEDAA0", Offset = "0x1AEC0A0", VA = "0x181AEDAA0")]
		get
		{
			return default(FileAttributes);
		}
	}

	[Token(Token = "0x17000816")]
	internal bool ExistsCore
	{
		[Token(Token = "0x600324B")]
		[Address(RVA = "0x1AEDB10", Offset = "0x1AEC110", VA = "0x181AEDB10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000817")]
	internal DateTimeOffset LastWriteTimeCore
	{
		[Token(Token = "0x600324C")]
		[Address(RVA = "0x1AEDC20", Offset = "0x1AEC220", VA = "0x181AEDC20")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x17000818")]
	internal long LengthCore
	{
		[Token(Token = "0x600324D")]
		[Address(RVA = "0x1AEDE90", Offset = "0x1AEC490", VA = "0x181AEDE90")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000819")]
	internal string NormalizedPath
	{
		[Token(Token = "0x6003250")]
		[Address(RVA = "0x1AEDF10", Offset = "0x1AEC510", VA = "0x181AEDF10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700081A")]
	public virtual string FullName
	{
		[Token(Token = "0x6003253")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700081B")]
	public virtual string Name
	{
		[Token(Token = "0x6003254")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700081C")]
	public virtual bool Exists
	{
		[Token(Token = "0x6003255")]
		[Address(RVA = "0x1AEDB90", Offset = "0x1AEC190", VA = "0x181AEDB90", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700081D")]
	public DateTime LastWriteTime
	{
		[Token(Token = "0x6003257")]
		[Address(RVA = "0x1AEDD80", Offset = "0x1AEC380", VA = "0x181AEDD80")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700081E")]
	public DateTime LastWriteTimeUtc
	{
		[Token(Token = "0x6003258")]
		[Address(RVA = "0x1AEDCB0", Offset = "0x1AEC2B0", VA = "0x181AEDCB0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x6003247")]
	[Address(RVA = "0x1AE86E0", Offset = "0x1AE6CE0", VA = "0x181AE86E0")]
	protected FileSystemInfo()
	{
	}

	[Token(Token = "0x6003248")]
	[Address(RVA = "0x1AED150", Offset = "0x1AEB750", VA = "0x181AED150")]
	internal static FileSystemInfo Create(string fullPath, ref FileSystemEntry findData)
	{
		return null;
	}

	[Token(Token = "0x6003249")]
	[Address(RVA = "0x1AED880", Offset = "0x1AEBE80", VA = "0x181AED880")]
	internal unsafe void Init(global::Interop.NtDll.FILE_FULL_DIR_INFORMATION* info)
	{
	}

	[Token(Token = "0x600324E")]
	[Address(RVA = "0x1AED6F0", Offset = "0x1AEBCF0", VA = "0x181AED6F0")]
	private void EnsureDataInitialized()
	{
	}

	[Token(Token = "0x600324F")]
	[Address(RVA = "0x1AED8D0", Offset = "0x1AEBED0", VA = "0x181AED8D0")]
	public void Refresh()
	{
	}

	[Token(Token = "0x6003251")]
	[Address(RVA = "0x1AED920", Offset = "0x1AEBF20", VA = "0x181AED920")]
	protected FileSystemInfo(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6003252")]
	[Address(RVA = "0x1AED760", Offset = "0x1AEBD60", VA = "0x181AED760", Slot = "7")]
	[ComVisible(false)]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6003256")]
	public abstract void Delete();

	[Token(Token = "0x6003259")]
	[Address(RVA = "0x1AED900", Offset = "0x1AEBF00", VA = "0x181AED900", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
