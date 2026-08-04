// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileSystemInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000561")]
public abstract class FileSystemInfo : MarshalByRefObject, ISerializable
{
	[Token(Token = "0x400166D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private System.IO.FileStatus _fileStatus;

	[Token(Token = "0x400166E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	protected string FullPath;

	[Token(Token = "0x400166F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	protected string OriginalPath;

	[Token(Token = "0x4001670")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	internal string _name;

	[Token(Token = "0x170005FD")]
	public FileAttributes Attributes
	{
		[Token(Token = "0x6002982")]
		[Address(RVA = "0x3C23110", Offset = "0x3C23110", VA = "0x3C23110")]
		get
		{
			return default(FileAttributes);
		}
	}

	[Token(Token = "0x170005FE")]
	internal bool ExistsCore
	{
		[Token(Token = "0x6002983")]
		[Address(RVA = "0x3C231E0", Offset = "0x3C231E0", VA = "0x3C231E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005FF")]
	internal DateTimeOffset CreationTimeCore
	{
		[Token(Token = "0x6002984")]
		[Address(RVA = "0x3C23250", Offset = "0x3C23250", VA = "0x3C23250")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x17000600")]
	internal DateTimeOffset LastWriteTimeCore
	{
		[Token(Token = "0x6002985")]
		[Address(RVA = "0x3C232C0", Offset = "0x3C232C0", VA = "0x3C232C0")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x17000601")]
	internal string NormalizedPath
	{
		[Token(Token = "0x6002987")]
		[Address(RVA = "0x3C23760", Offset = "0x3C23760", VA = "0x3C23760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000602")]
	public virtual string FullName
	{
		[Token(Token = "0x600298A")]
		[Address(RVA = "0x3C23AC0", Offset = "0x3C23AC0", VA = "0x3C23AC0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000603")]
	public virtual string Name
	{
		[Token(Token = "0x600298B")]
		[Address(RVA = "0x3C23AD0", Offset = "0x3C23AD0", VA = "0x3C23AD0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000604")]
	public virtual bool Exists
	{
		[Token(Token = "0x600298C")]
		[Address(RVA = "0x3C23AE0", Offset = "0x3C23AE0", VA = "0x3C23AE0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000605")]
	public DateTime CreationTime
	{
		[Token(Token = "0x600298E")]
		[Address(RVA = "0x3C23BC0", Offset = "0x3C23BC0", VA = "0x3C23BC0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000606")]
	public DateTime CreationTimeUtc
	{
		[Token(Token = "0x600298F")]
		[Address(RVA = "0x3C23C20", Offset = "0x3C23C20", VA = "0x3C23C20")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000607")]
	public DateTime LastWriteTime
	{
		[Token(Token = "0x6002990")]
		[Address(RVA = "0x3C23D00", Offset = "0x3C23D00", VA = "0x3C23D00")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000608")]
	public DateTime LastWriteTimeUtc
	{
		[Token(Token = "0x6002991")]
		[Address(RVA = "0x3C23D60", Offset = "0x3C23D60", VA = "0x3C23D60")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x600297F")]
	[Address(RVA = "0x3C22E90", Offset = "0x3C22E90", VA = "0x3C22E90")]
	protected FileSystemInfo()
	{
	}

	[Token(Token = "0x6002980")]
	[Address(RVA = "0x3C22EF0", Offset = "0x3C22EF0", VA = "0x3C22EF0")]
	internal static FileSystemInfo Create(string fullPath, string fileName, ref System.IO.FileStatus fileStatus)
	{
		return null;
	}

	[Token(Token = "0x6002981")]
	[Address(RVA = "0x3C23060", Offset = "0x3C23060", VA = "0x3C23060")]
	internal void Init(ref System.IO.FileStatus fileStatus)
	{
	}

	[Token(Token = "0x6002986")]
	[Address(RVA = "0x3C23330", Offset = "0x3C23330", VA = "0x3C23330")]
	internal static void ThrowNotFound(string path)
	{
	}

	[Token(Token = "0x6002988")]
	[Address(RVA = "0x3C23770", Offset = "0x3C23770", VA = "0x3C23770")]
	protected FileSystemInfo(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002989")]
	[Address(RVA = "0x3C23990", Offset = "0x3C23990", VA = "0x3C23990", Slot = "7")]
	[ComVisible(false)]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600298D")]
	public abstract void Delete();

	[Token(Token = "0x6002992")]
	[Address(RVA = "0x3C23E40", Offset = "0x3C23E40", VA = "0x3C23E40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
